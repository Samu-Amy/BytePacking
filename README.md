# Byte Packing

Since some values use a byte even though they only need part of it (for example, Boolean values only need one bit but often use an entire byte), there is a way to optimize memory usage called Byte Packing, which consists of "manually inserting data into bytes" using individual bits (for example, saving 8 Boolean values in the same byte by assigning each bit the value of one of them).
This is an exercise in implementing this method.
