﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/macie2/model/DescribeClassificationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeClassificationJobResult::DescribeClassificationJobResult() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_initialRun(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobType(JobType::NOT_SET),
    m_samplingPercentage(0)
{
}

DescribeClassificationJobResult::DescribeClassificationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_initialRun(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobType(JobType::NOT_SET),
    m_samplingPercentage(0)
{
  *this = result;
}

DescribeClassificationJobResult& DescribeClassificationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("customDataIdentifierIds"))
  {
    Array<JsonView> customDataIdentifierIdsJsonList = jsonValue.GetArray("customDataIdentifierIds");
    for(unsigned customDataIdentifierIdsIndex = 0; customDataIdentifierIdsIndex < customDataIdentifierIdsJsonList.GetLength(); ++customDataIdentifierIdsIndex)
    {
      m_customDataIdentifierIds.push_back(customDataIdentifierIdsJsonList[customDataIdentifierIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("initialRun"))
  {
    m_initialRun = jsonValue.GetBool("initialRun");

  }

  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

  }

  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("jobStatus"));

  }

  if(jsonValue.ValueExists("jobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("jobType"));

  }

  if(jsonValue.ValueExists("lastRunTime"))
  {
    m_lastRunTime = jsonValue.GetString("lastRunTime");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("s3JobDefinition"))
  {
    m_s3JobDefinition = jsonValue.GetObject("s3JobDefinition");

  }

  if(jsonValue.ValueExists("samplingPercentage"))
  {
    m_samplingPercentage = jsonValue.GetInteger("samplingPercentage");

  }

  if(jsonValue.ValueExists("scheduleFrequency"))
  {
    m_scheduleFrequency = jsonValue.GetObject("scheduleFrequency");

  }

  if(jsonValue.ValueExists("statistics"))
  {
    m_statistics = jsonValue.GetObject("statistics");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
