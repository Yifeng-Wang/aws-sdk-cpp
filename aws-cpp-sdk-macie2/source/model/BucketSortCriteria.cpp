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

#include <aws/macie2/model/BucketSortCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

BucketSortCriteria::BucketSortCriteria() : 
    m_attributeNameHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
}

BucketSortCriteria::BucketSortCriteria(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false)
{
  *this = jsonValue;
}

BucketSortCriteria& BucketSortCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributeName"))
  {
    m_attributeName = jsonValue.GetString("attributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderBy"))
  {
    m_orderBy = OrderByMapper::GetOrderByForName(jsonValue.GetString("orderBy"));

    m_orderByHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketSortCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("attributeName", m_attributeName);

  }

  if(m_orderByHasBeenSet)
  {
   payload.WithString("orderBy", OrderByMapper::GetNameForOrderBy(m_orderBy));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
