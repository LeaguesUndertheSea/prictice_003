//#include <stdio.h>
//
//int main(void)
//{
//	unsigned int positiveNum = -1;
//
//	printf("Stored value in Unsigned value: %u\n", positiveNum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	unsigned int positiveNum = -1;
//
//	printf("Stored value in Unsigned value: %u\n", positiveNum);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	short myShort = 100;
//
//	unsigned short screenWidth = 800;
//	unsigned short screenHeight = 600;
//
//	unsigned x = 400;
//	unsigned y = 300;
//
//	printf("My short is: %hd\n", myShort);
//
//	printf("The screen resolution is: %hu x %hu\n", screenWidth, screenHeight);
//
//	printf("Current position is :(%hu, %hu)\n", x, y);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	short myShort = 100;
//
//	unsigned short screenWidth = 800;
//	unsigned short screenHeight = 600;
//
//	unsigned short x = 400;
//	unsigned short y = 300;
//
//	printf("myShort is: %hd\n", myShort);
//
//	printf("The screen resolution is: %hu x %hu\n", screenWidth, screenHeight);
//
//	printf("Current position is:(%hu, %hu)\n", x, y);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	short myShort = 100;
//
//	unsigned short screenWidth = 800;
//	unsigned short screenHeight = 600;
//
//	unsigned short x = 400;
//	unsigned short y = 300;
//
//	printf("myShort is: %hd\n", myShort);
//
//	printf("The screen resolution is: %hu x %hu\n", screenWidth, screenHeight);
//
//	printf("Current position is:(%hu, %hu)\n", x, y);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("Size of short : %zu\n", sizeof(short));
//
//	printf("Size of unsigned short : %zu\n", sizeof(unsigned short));
//
//	printf("Size of int : %zu\n", sizeof(int));
//
//	printf("Size of unsigned int : %zu\n", sizeof(unsigned int));
//	
//	printf("Size of long: %zu\n", sizeof(long));
//
//	printf("Size of unsigned: %zu\n", sizeof(unsigned long));
//	
//	printf("Size of long long: %zu\n", sizeof(long long));
//
//	printf("Size of unsigned long long: %zu\n", sizeof(unsigned long long));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("Size of short: %zu\n", sizeof(short));
//
//	printf("Size of unsigned short: %zu\n", sizeof(unsigned short));
//
//	printf("Size of int: %zu\n", sizeof(int));
//
//	printf("Size of unsigned int: %zu\n", sizeof(unsigned int));
//
//	printf("Size of long: %zu\n", sizeof(long));
//
//	printf("Size of unsigned long: %zu\n", sizeof(unsigned long));
//
//	printf("Size of long long: %zu\n", sizeof(long long));
//
//	printf("Size of unsigned long long:%zu\n", sizeof(unsigned long long));
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	long number_1 = 123;
//
//	unsigned long number_2 = 456;
//
//	long long number_3 = 123;
//
//	unsigned long long number_4 = 456;
//
//	printf("%ld\n", number_1);
//
//	printf("%lu\n", number_2);
//
//	printf("%lld\n", number_3);
//
//	printf("%llu\n", number_4);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	long number_1 = 123;
//
//	unsigned number_2 = 456;
//
//	long long number_3 = 123;
//
//	unsigned long long number_4 = 456;
//
//	printf("%ld\n", number_1);
//
//	printf("%lu\n", number_2);
//
//	printf("%lld\n", number_3);
//
//	printf("%llu\n", number_4);
//
//	_int16 sun_flower = 100;
//
//	printf("%hd\n", sun_flower);
//
//	return 0;
//}



//#include <stdio.h>
//#include <stdint.h>
//
//int main(void)
//{
//	int16_t myInt16 = 1;
//
//	uint16_t myUint16 = 2;
//
//	int32_t myInt32 = 3;
//
//	uint32_t myUint32 = 4U;
//
//	int64_t myInt64 = 5LU;
//
//	uint64_t myUint64 = 6LLU;
//
//	printf("Size of myInt16: %zu\n", sizeof(myInt16));
//
//	printf("Size of myUint16: %zu\n", sizeof(myUint16));
//
//	printf("Size of myInt32: %zu\n", sizeof(myInt32));
//
//	printf("Size of myUin32: %zu\n", sizeof(myUint32));
//
//	printf("Size of myint64: %zu\n", sizeof(myInt64));
//
//	printf("Size of myUin64: %zu\n", sizeof(myUint64));
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//
//int main(void)
//{
//	int16_t myInt16 = 1;
//
//	uint16_t myUint16 = 2;
//
//	int32_t myInt32 = 3;
//
//	uint32_t myUint32 = 4U;
//
//	int64_t myInt64 = 5LU;
//
//	uint64_t myUint64 = 6LLU;
//
//	printf("Size of myInt16: %zu\n", sizeof(myInt16));
//
//	printf("Size of myUint16: %zu\n", sizeof(myUint16));
//
//	printf("Size of myInt32: %zu\n", sizeof(myInt32));
//
//	printf("Size of myUint32: %zu\n",sizeof(myUint32) );
//
//	printf("Size of myInt64: %zu\n", sizeof(myInt64));
//
//	printf("Size of myUint64: %zu\n", sizeof(myUint64));
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//
//int main(void)
//{
//	uint32_t uNum = UINT32_MAX;
//	int32_t sNum = (int32_t)uNum;
//
//	printf("uint32_t : %lu\n", uNum);
//	printf("converted to int32_t : %ld\n", sNum);
//
//	uint64_t longNum = 50000;
//	int16_t shortNum = (int16_t)longNum;
//
//	printf("longNum : %llu\n", longNum);
//	printf("converted to int16_t : %hd\n", shortNum);
//
//	uint16_t smallNum = 32767;
//	int32_t bigNum = (int32_t)smallNum;
//
//	printf("smallNum : %hu\n", smallNum);
//	printf("converted to int32_t : %ld\n", bigNum);
//
//	uint16_t usmallNum = 12345;
//	int16_t ssmallNum = (int16_t)usmallNum;
//
//	printf("usmallNum : %hu\n", usmallNum);
//	printf("converted to int16_t : %hd\n", ssmallNum);
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//
//int main(void)
//{
//	uint32_t uNum = UINT32_MAX;
//	int32_t sNum = (int32_t)uNum;
//
//	printf("uNum : %lu\n", uNum);
//	printf("converted to int32_t : %ld\n", sNum);
//
//	uint64_t longNum = 50000;
//	int64_t shortNum = (int64_t)longNum;
//
//	printf("longNum : %llu\n", longNum);
//	printf("converted to int64_t : %lld\n", shortNum);
//
//	uint16_t smallNum = 32767;
//	int16_t bigNum = (int16_t)smallNum;
//
//	printf("smallNum : %hu\n", smallNum);
//	printf("converted to int16_t : %hd\n", bigNum);
//
//	uint16_t usmallNum = 12345;
//	int16_t ssmallNum = (int16_t)usmallNum;
//
//	printf("usmallNum : %hu\n", usmallNum);
//	printf("converted to int16_t : %hd\n", ssmallNum);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	int8_t myInt8 = INT8_MAX;
//
//	int32_t myInt32 = INT32_MAX;
//
//	uint32_t myUint32 = UINT32_MAX;
//
//	uint64_t myUint64 = UINT64_MAX;
//
//	printf("myInt8 : %" PRId8 "\n", myInt8);
//
//	printf("myInt32 : %" PRId32 "\n", myInt32);
//
//	printf("myUint32 : %" PRIu32 "\n", myUint32);
//
//	printf("myUint64 : %" PRIu64 "\n", myUint64);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	int8_t myInt8 = INT8_MAX;
//
//	int32_t myInt32 = INT32_MAX;
//
//	uint32_t myUint32 = UINT32_MAX;
//
//	uint64_t myUint64 = UINT64_MAX;
//
//	printf("myInt8 : %" PRId8 "\n", myInt8);
//
//	printf("myInt32 : %" PRId32 "\n", myInt32);
//
//	printf("myUint32 : %" PRIu32 "\n", myUint32);
//
//	printf("myUint64 : %" PRIu64 "\n", myUint64);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	int_least32_t playerScore = 50000;
//
//	int_fast32_t pixelValue = 128;
//
//	printf("playScore : %" PRIdLEAST32 "\n", playerScore);
//
//	printf("pixelValue : %" PRIdFAST32 "\n", pixelValue);
//
//	return 0;
//}

