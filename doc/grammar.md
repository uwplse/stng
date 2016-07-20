# STNG grammar

- the language is typed: int, real, bool, multi-dimensional array, list
- all list operations are uninterpreted (and hence they return new lists), 
while array operations use the theory of arrays
- loops are canonicalized into `while (e) { s }` where there are no `break` or `continue` 
statements inside the loop. Such unstructured control flows 
are converted into boolean variables and then incorporated into the loop condition.

## Production rules

```
lit := int | real | bool
e := lit | var | e op e | op e | l | arr
s := var = e | if (e) { s } else s | while (e) { s } | s ; s

# array operations
arr := var[e]

# list operations
l := list() | append(l, e) | concat(l, l) | get(l, e) | Query(SQL) | size(l) | unique(l)
```
