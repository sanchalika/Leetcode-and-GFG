positive = (num for num in nums if num >= 0)
negative = (num for num in nums if num < 0)
return [x for x in itertools.chain(*zip(positive, negative))]