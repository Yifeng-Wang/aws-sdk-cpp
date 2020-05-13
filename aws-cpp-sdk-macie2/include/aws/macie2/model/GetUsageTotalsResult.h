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
#include <aws/macie2/model/UsageTotal.h>
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
  class AWS_MACIE2_API GetUsageTotalsResult
  {
  public:
    GetUsageTotalsResult();
    GetUsageTotalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUsageTotalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for a specific usage metric.</p>
     */
    inline const Aws::Vector<UsageTotal>& GetUsageTotals() const{ return m_usageTotals; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for a specific usage metric.</p>
     */
    inline void SetUsageTotals(const Aws::Vector<UsageTotal>& value) { m_usageTotals = value; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for a specific usage metric.</p>
     */
    inline void SetUsageTotals(Aws::Vector<UsageTotal>&& value) { m_usageTotals = std::move(value); }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for a specific usage metric.</p>
     */
    inline GetUsageTotalsResult& WithUsageTotals(const Aws::Vector<UsageTotal>& value) { SetUsageTotals(value); return *this;}

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for a specific usage metric.</p>
     */
    inline GetUsageTotalsResult& WithUsageTotals(Aws::Vector<UsageTotal>&& value) { SetUsageTotals(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for a specific usage metric.</p>
     */
    inline GetUsageTotalsResult& AddUsageTotals(const UsageTotal& value) { m_usageTotals.push_back(value); return *this; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for a specific usage metric.</p>
     */
    inline GetUsageTotalsResult& AddUsageTotals(UsageTotal&& value) { m_usageTotals.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UsageTotal> m_usageTotals;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
