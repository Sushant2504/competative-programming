package main;

import (
    "fmt"
)


func main() {
    repeat(readln().toInt()) {
        val n = readln().toLong()
        var l = (-1).toLong()
        var r = 1e9.toLong()
        while (r - l > 1) {
            val mid = (l + r) / 2
            if (mid * mid >= n)
                r = mid
            else
                l = mid
        }
        println(r - 1)
    }
}