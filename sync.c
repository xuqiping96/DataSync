/**
 *
 * @file sync.c
 * @author 智识之道
 * @brief 数据同步（涉及信号量、锁、多线程等）
 * @version 0.1
 * @date 2021-12-31
 *
 * @copyright Copyright (c) 2021
 *
 */

///////////////////////////////////////////////////////////////////////////////
//头文件区域

#include <stdlib.h>
#include <stdio.h>

// TODO：请自行添加必要的头文件

///////////////////////////////////////////////////////////////////////////////
//宏定义区域

//缓冲区大小，测试的时候自己可以修改这个参数，建议不要设置那么大，小于10以内的方便观察。
#define BUFFER_SIZE 9
//随机休眠的秒数，这里设置为（缓冲区大小-1），即为随机休眠0～（缓冲区大小-1）秒
#define SECONDS (BUFFER_SIZE - 1)
//默认值
#define BUFFER_DEFAULT_VALUE -1

///////////////////////////////////////////////////////////////////////////////
//结构体区域

/**
 * @brief 命令行参数
 *
 */
typedef struct
{
    //生产者数量
    int producerNumber;
    //消费者数量
    int consumerNumber;
} CommandLineArgument;

/**
 * @brief 线程参数
 *
 */
typedef struct
{
    // TODO：请自行设计，如有需要自由添加成员
} ThreadParameter;

///////////////////////////////////////////////////////////////////////////////
//变量区域

//命令行参数
CommandLineArgument commandLineArgument;
//生产者线程参数，多个线程是一个数组，注意动态分配空间
ThreadParameter *producerThreadParameter;
//消费者线程参数，多个线程是一个数组，注意动态分配空间
ThreadParameter *consumerThreadParameter;
//缓冲区大小
int buffer[BUFFER_SIZE];
//生产者写缓冲区索引
int producerBufferIndex = 0;
//消费者读缓冲区索引
int consumerBufferIndex = 0;

// TODO：锁、信号量等必要的在这里自行添加

///////////////////////////////////////////////////////////////////////////////
//函数区域

/**
 * @brief 解析命令行参数
 *
 * 先判断参数个数，不符合要求则打印使用说明，举例说明，并退出程序。
 * 参数个数正确情况，则解析参数，存入commandLineArgument结构体中。
 * 需要判断生产者、消费者数量，必须在1～BUFFER_SIZE之间，如果不符合则退出程序。
 *
 * @param argc 参数个数
 * @param argv 参数值数组
 */
void parseCommandLineArgument(int argc, char *argv[])
{
    printf("TODO: parseCommandLineArgument\n");
}

/**
 * @brief 随机数发生器初始化
 *
 */
void initRandom()
{
    printf("TODO: initRandom\n");
}

/**
 * @brief 初始化信号量
 *
 * 需要初始化二个信号量：分别是标识缓冲区空、满的信号量。
 *
 */
void initSemaphore()
{
    printf("TODO: initSemaphore\n");
}

/**
 * @brief 初始化锁
 *
 */
void initLock()
{
    printf("TODO: initLock\n");
}

/**
 * @brief 初始化缓冲区
 *
 * 默认都要赋值为-1
 *
 */
void initBuffer()
{
    printf("TODO: initBuffer\n");
}

/**
 * @brief 打印出缓冲区当前的内容，方便调试用。
 *
 */
void dumpBuffer()
{
    printf("TODO: dumpBuffer\n");
}

/**
 * @brief 插入一个数据到缓冲区
 *
 * @param value 数据的值
 * @return 返回数据存在缓冲区的索引值
 */
int insertData(int value)
{
    printf("TODO: insertData\n");

    return 0;
}

/**
 * @brief 从缓冲区中移除一个数据
 *
 * @param value 返回删除数据的值，方便后续打印使用
 * @return 返回数据移除的缓冲区的索引值
 */
int removeData(int *value)
{
    printf("TODO: removeData\n");

    return 0;
}

/**
 * @brief 生成随机休眠时间
 *
 * 随机休眠时间范围：0～（缓冲区大小-1）秒
 *
 * @return  休眠的秒数
 */
int generateRandomSleepTime()
{
    printf("TODO: generateRandomSleepTime\n");

    return 0;
}

/**
 * @brief 生成随机值
 *
 * 值范围：任意正整数
 *
 * @return 任意正整数
 */
int generateRandomValue()
{
    printf("TODO: generateRandomValue\n");

    return BUFFER_DEFAULT_VALUE;
}

/**
 * @brief 生产者线程执行的函数
 *
 * 1.休眠约定范围的随机秒数
 * 2.生成数据
 * 3.插入数据
 * 4.打印信息
 *
 * @see generateRandomSleepTime
 * @see generateRandomValue
 * @see insertData
 *
 * @param arg 生产者线程参数
 */
void *producerRoutine(void *arg)
{
    printf("TODO: producerRoutine\n");
}

/**
 * @brief 消费者线程执行的函数
 *
 * 1.休眠约定范围的随机秒数
 * 2.插入数据
 * 3.打印信息
 *
 * @see generateRandomSleepTime
 * @see removeData
 *
 * @param arg 消费者线程参数
 */
void *consumerRoutine(void *arg)
{
    printf("TODO: consumerRoutine\n");
}

/**
 * @brief 创建生产者线程
 *
 * 需要考虑一个或多个线程的情况
 *
 * @see producerRoutine
 *
 */
void createProducerThreads()
{
    printf("TODO: createProducerThreads\n");
}

/**
 * @brief 创建消费者线程
 *
 * 需要考虑一个或多个线程的情况
 *
 * @see consumerRoutine
 *
 */
void createConsumerThreads()
{
    printf("TODO: createConsumerThreads\n");
}

/**
 * @brief 最终要处理的内容
 *
 * 自行考虑细节。
 * 比如：
 * 怎么让进程保持运行
 * 要退出时释放资源
 *
 */
void finally()
{
    printf("TODO: finally\n");
}

/**
 * @brief 主函数入口
 *
 * 请不要在主函数里面添加内容。
 *
 * @param argc 参数个数
 * @param argv 参数数组
 * @return int
 */
int main(int argc, char *argv[])
{
    parseCommandLineArgument(argc, argv);
    initRandom();
    initSemaphore();
    initLock();
    initBuffer();
    createProducerThreads();
    createConsumerThreads();
    finally();

    return 0;
}