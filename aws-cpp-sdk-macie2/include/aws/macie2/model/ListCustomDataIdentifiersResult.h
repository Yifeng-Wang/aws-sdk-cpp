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

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/CustomDataIdentifierSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class AWS_MACIE2_API ListCustomDataIdentifiersResult
  {
  public:
    ListCustomDataIdentifiersResult();
    ListCustomDataIdentifiersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCustomDataIdentifiersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each custom data identifier.</p>
     */
    inline const Aws::Vector<CustomDataIdentifierSummary>& GetItems() const{ return m_items; }

    /**
     * <p>An array of objects, one for each custom data identifier.</p>
     */
    inline void SetItems(const Aws::Vector<CustomDataIdentifierSummary>& value) { m_items = value; }

    /**
     * <p>An array of objects, one for each custom data identifier.</p>
     */
    inline void SetItems(Aws::Vector<CustomDataIdentifierSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>An array of objects, one for each custom data identifier.</p>
     */
    inline ListCustomDataIdentifiersResult& WithItems(const Aws::Vector<CustomDataIdentifierSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of objects, one for each custom data identifier.</p>
     */
    inline ListCustomDataIdentifiersResult& WithItems(Aws::Vector<CustomDataIdentifierSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each custom data identifier.</p>
     */
    inline ListCustomDataIdentifiersResult& AddItems(const CustomDataIdentifierSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each custom data identifier.</p>
     */
    inline ListCustomDataIdentifiersResult& AddItems(CustomDataIdentifierSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListCustomDataIdentifiersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListCustomDataIdentifiersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListCustomDataIdentifiersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CustomDataIdentifierSummary> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
