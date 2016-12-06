#include <stdio.h>
void printBits(int val)
{
    if (val < 0)
    {
        val = abs(val);
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 1073741823)
    {
        val = val - 1073741824;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 536870911)
    {
        val = val - 536870912;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 268435455)
    {
        val = val - 268435456;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 134217727)
    {
        val = val - 134217728;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 67108863)
    {
        val = val - 67108864;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 33554431)
    {
        val = val - 33554432;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 16777215)
    {
        val = val - 16777216;
        printf("%i ", 1);
    }else{
        printf("%i ", 0);
    }
    if (val > 8388607)
    {
        val = val - 8388608;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 4194303)
    {
        val = val - 4194304;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 2097151)
    {
        val = val - 2097152;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 1048575)
    {
        val = val - 1048576;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 524287)
    {
        val = val - 524288;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 262143)
    {
        val = val - 262144;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 131071)
    {
        val = val - 131072;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 65535)
    {
        val = val - 65536;
        printf("%i ", 1);
    }else{
        printf("%i ", 0);
    }
    if (val > 32767)
    {
        val = val - 32768;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 16383)
    {
        val = val - 16384;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 8191)
    {
        val = val - 8192;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 4095)
    {
        val = val - 4096;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 2047)
    {
        val = val - 2048;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 1023)
    {
        val = val - 1024;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 511)
    {
        val = val - 512;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 255)
    {
        val = val - 256;
        printf("%i ", 1);
    }else{
        printf("%i ", 0);
    }
    if (val > 127)
    {
        val = val - 128;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 63)
    {
        val = val - 64;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 31)
    {
        val = val - 32;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 15)
    {
        val = val - 16;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 7)
    {
        val = val - 8;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 3)
    {
        val = val - 4;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 1)
    {
        val = val - 2;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
    if (val > 0)
    {
        val = val - 1;
        printf("%i", 1);
    }else{
        printf("%i", 0);
    }
}
