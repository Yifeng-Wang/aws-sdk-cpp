﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>A destination for events that failed processing.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/OnFailure">AWS
   * API Reference</a></p>
   */
  class OnFailure
  {
  public:
    AWS_LAMBDA_API OnFailure();
    AWS_LAMBDA_API OnFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API OnFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the destination resource.</p> <p>To retain
     * records of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">asynchronous
     * invocations</a>, you can configure an Amazon SNS topic, Amazon SQS queue, Lambda
     * function, or Amazon EventBridge event bus as the destination.</p> <p>To retain
     * records of failed invocations from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#event-source-mapping-destinations">Kinesis
     * and DynamoDB event sources</a>, you can configure an Amazon SNS topic or Amazon
     * SQS queue as the destination.</p> <p>To retain records of failed invocations
     * from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-smaa-onfailure-destination">self-managed
     * Kafka</a> or <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-onfailure-destination">Amazon
     * MSK</a>, you can configure an Amazon SNS topic or Amazon SQS queue as the
     * destination.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination resource.</p> <p>To retain
     * records of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">asynchronous
     * invocations</a>, you can configure an Amazon SNS topic, Amazon SQS queue, Lambda
     * function, or Amazon EventBridge event bus as the destination.</p> <p>To retain
     * records of failed invocations from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#event-source-mapping-destinations">Kinesis
     * and DynamoDB event sources</a>, you can configure an Amazon SNS topic or Amazon
     * SQS queue as the destination.</p> <p>To retain records of failed invocations
     * from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-smaa-onfailure-destination">self-managed
     * Kafka</a> or <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-onfailure-destination">Amazon
     * MSK</a>, you can configure an Amazon SNS topic or Amazon SQS queue as the
     * destination.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination resource.</p> <p>To retain
     * records of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">asynchronous
     * invocations</a>, you can configure an Amazon SNS topic, Amazon SQS queue, Lambda
     * function, or Amazon EventBridge event bus as the destination.</p> <p>To retain
     * records of failed invocations from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#event-source-mapping-destinations">Kinesis
     * and DynamoDB event sources</a>, you can configure an Amazon SNS topic or Amazon
     * SQS queue as the destination.</p> <p>To retain records of failed invocations
     * from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-smaa-onfailure-destination">self-managed
     * Kafka</a> or <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-onfailure-destination">Amazon
     * MSK</a>, you can configure an Amazon SNS topic or Amazon SQS queue as the
     * destination.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination resource.</p> <p>To retain
     * records of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">asynchronous
     * invocations</a>, you can configure an Amazon SNS topic, Amazon SQS queue, Lambda
     * function, or Amazon EventBridge event bus as the destination.</p> <p>To retain
     * records of failed invocations from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#event-source-mapping-destinations">Kinesis
     * and DynamoDB event sources</a>, you can configure an Amazon SNS topic or Amazon
     * SQS queue as the destination.</p> <p>To retain records of failed invocations
     * from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-smaa-onfailure-destination">self-managed
     * Kafka</a> or <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-onfailure-destination">Amazon
     * MSK</a>, you can configure an Amazon SNS topic or Amazon SQS queue as the
     * destination.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination resource.</p> <p>To retain
     * records of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">asynchronous
     * invocations</a>, you can configure an Amazon SNS topic, Amazon SQS queue, Lambda
     * function, or Amazon EventBridge event bus as the destination.</p> <p>To retain
     * records of failed invocations from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#event-source-mapping-destinations">Kinesis
     * and DynamoDB event sources</a>, you can configure an Amazon SNS topic or Amazon
     * SQS queue as the destination.</p> <p>To retain records of failed invocations
     * from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-smaa-onfailure-destination">self-managed
     * Kafka</a> or <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-onfailure-destination">Amazon
     * MSK</a>, you can configure an Amazon SNS topic or Amazon SQS queue as the
     * destination.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination resource.</p> <p>To retain
     * records of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">asynchronous
     * invocations</a>, you can configure an Amazon SNS topic, Amazon SQS queue, Lambda
     * function, or Amazon EventBridge event bus as the destination.</p> <p>To retain
     * records of failed invocations from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#event-source-mapping-destinations">Kinesis
     * and DynamoDB event sources</a>, you can configure an Amazon SNS topic or Amazon
     * SQS queue as the destination.</p> <p>To retain records of failed invocations
     * from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-smaa-onfailure-destination">self-managed
     * Kafka</a> or <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-onfailure-destination">Amazon
     * MSK</a>, you can configure an Amazon SNS topic or Amazon SQS queue as the
     * destination.</p>
     */
    inline OnFailure& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination resource.</p> <p>To retain
     * records of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">asynchronous
     * invocations</a>, you can configure an Amazon SNS topic, Amazon SQS queue, Lambda
     * function, or Amazon EventBridge event bus as the destination.</p> <p>To retain
     * records of failed invocations from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#event-source-mapping-destinations">Kinesis
     * and DynamoDB event sources</a>, you can configure an Amazon SNS topic or Amazon
     * SQS queue as the destination.</p> <p>To retain records of failed invocations
     * from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-smaa-onfailure-destination">self-managed
     * Kafka</a> or <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-onfailure-destination">Amazon
     * MSK</a>, you can configure an Amazon SNS topic or Amazon SQS queue as the
     * destination.</p>
     */
    inline OnFailure& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination resource.</p> <p>To retain
     * records of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">asynchronous
     * invocations</a>, you can configure an Amazon SNS topic, Amazon SQS queue, Lambda
     * function, or Amazon EventBridge event bus as the destination.</p> <p>To retain
     * records of failed invocations from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#event-source-mapping-destinations">Kinesis
     * and DynamoDB event sources</a>, you can configure an Amazon SNS topic or Amazon
     * SQS queue as the destination.</p> <p>To retain records of failed invocations
     * from <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-smaa-onfailure-destination">self-managed
     * Kafka</a> or <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-onfailure-destination">Amazon
     * MSK</a>, you can configure an Amazon SNS topic or Amazon SQS queue as the
     * destination.</p>
     */
    inline OnFailure& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
