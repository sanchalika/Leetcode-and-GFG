class Node {
    int key, val, freq;
    Node next, prev;

    Node(int key, int val) {
        this.key = key;
        this.val = val;
        freq = 1;
    }
}

class doublyLinkedList {
    Node head, tail;
    int size;

    doublyLinkedList() {
        head = new Node(0, 0);
        tail = new Node(0, 0);

        head.next = tail;
        tail.prev = head;
        size = 0;
    }

    void addToHead(Node node) {
        node.next = head.next;
        node.prev = head;
        head.next.prev = node;
        head.next = node;
        
        size++;
    }

    void remove(Node node) {
        node.prev.next = node.next;
        node.next.prev = node.prev;
        size--;
    }
}

class LFUCache {

    private HashMap<Integer, Node> keyNode;
    private HashMap<Integer, doublyLinkedList> freqMap;
    private int minFreq;
    private int currSize;
    private int capacity;

    public LFUCache(int capacity) {
        this.capacity = capacity;
        minFreq = 0;
        currSize = 0;
        keyNode = new HashMap<>();
        freqMap = new HashMap<>();
    }

    private void updateFreq(Node node) {
        int oldFreq = node.freq;
        freqMap.get(oldFreq).remove(node);

        if (oldFreq == minFreq && freqMap.get(oldFreq).size == 0) {
            minFreq++;
        }

        node.freq++;

        doublyLinkedList nextList = freqMap.getOrDefault(node.freq, new doublyLinkedList());
        nextList.addToHead(node);
        freqMap.put(node.freq, nextList);
    }
    
    public int get(int key) {
        if(!keyNode.containsKey(key)) {
            return -1;
        }

        Node node = keyNode.get(key);
        updateFreq(node);
        return node.val;
    }
    
    public void put(int key, int value) {
        if(capacity == 0) return;

        if(keyNode.containsKey(key)) {
            Node node = keyNode.get(key);
            node.val = value;
            updateFreq(node);
        } else {
            if(currSize == capacity) {
                doublyLinkedList list = freqMap.get(minFreq);
                Node lru = list.tail.prev;
                list.remove(lru);
                keyNode.remove(lru.key);

                currSize--;
            }

            currSize++;

            minFreq = 1;
            doublyLinkedList listFreq = new doublyLinkedList();

            if(freqMap.containsKey(minFreq)) {
                listFreq = freqMap.get(minFreq);
            }

            Node node = new Node(key, value);
            listFreq.addToHead(node);
            keyNode.put(key, node);
            freqMap.put(minFreq, listFreq);
        }
    }
}


/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache obj = new LFUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */