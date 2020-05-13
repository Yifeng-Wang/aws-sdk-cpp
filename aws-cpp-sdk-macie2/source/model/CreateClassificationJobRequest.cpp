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

#include <aws/macie2/model/CreateClassificationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClassificationJobRequest::CreateClassificationJobRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_customDataIdentifierIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_initialRun(false),
    m_initialRunHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_s3JobDefinitionHasBeenSet(false),
    m_samplingPercentage(0),
    m_samplingPercentageHasBeenSet(false),
    m_scheduleFrequencyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateClassificationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_customDataIdentifierIdsHasBeenSet)
  {
   Array<JsonValue> customDataIdentifierIdsJsonList(m_customDataIdentifierIds.size());
   for(unsigned customDataIdentifierIdsIndex = 0; customDataIdentifierIdsIndex < customDataIdentifierIdsJsonList.GetLength(); ++customDataIdentifierIdsIndex)
   {
     customDataIdentifierIdsJsonList[customDataIdentifierIdsIndex].AsString(m_customDataIdentifierIds[customDataIdentifierIdsIndex]);
   }
   payload.WithArray("customDataIdentifierIds", std::move(customDataIdentifierIdsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_initialRunHasBeenSet)
  {
   payload.WithBool("initialRun", m_initialRun);

  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("jobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_s3JobDefinitionHasBeenSet)
  {
   payload.WithObject("s3JobDefinition", m_s3JobDefinition.Jsonize());

  }

  if(m_samplingPercentageHasBeenSet)
  {
   payload.WithInteger("samplingPercentage", m_samplingPercentage);

  }

  if(m_scheduleFrequencyHasBeenSet)
  {
   payload.WithObject("scheduleFrequency", m_scheduleFrequency.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




