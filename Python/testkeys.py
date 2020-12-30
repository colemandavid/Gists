# Testing keys

l = ['key1', 'key2', 'key3']

d = {}
d['key1'] = '1'
d['key2'] = '2'
d['key3'] = '3'

if all (k in d for k in l):
    print('All there')

