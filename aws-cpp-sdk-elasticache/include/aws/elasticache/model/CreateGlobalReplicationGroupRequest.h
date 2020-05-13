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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class AWS_ELASTICACHE_API CreateGlobalReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    CreateGlobalReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlobalReplicationGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The suffix name of a Global Datastore. The suffix guarantees uniqueness of
     * the Global Datastore name across multiple regions.</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupIdSuffix() const{ return m_globalReplicationGroupIdSuffix; }

    /**
     * <p>The suffix name of a Global Datastore. The suffix guarantees uniqueness of
     * the Global Datastore name across multiple regions.</p>
     */
    inline bool GlobalReplicationGroupIdSuffixHasBeenSet() const { return m_globalReplicationGroupIdSuffixHasBeenSet; }

    /**
     * <p>The suffix name of a Global Datastore. The suffix guarantees uniqueness of
     * the Global Datastore name across multiple regions.</p>
     */
    inline void SetGlobalReplicationGroupIdSuffix(const Aws::String& value) { m_globalReplicationGroupIdSuffixHasBeenSet = true; m_globalReplicationGroupIdSuffix = value; }

    /**
     * <p>The suffix name of a Global Datastore. The suffix guarantees uniqueness of
     * the Global Datastore name across multiple regions.</p>
     */
    inline void SetGlobalReplicationGroupIdSuffix(Aws::String&& value) { m_globalReplicationGroupIdSuffixHasBeenSet = true; m_globalReplicationGroupIdSuffix = std::move(value); }

    /**
     * <p>The suffix name of a Global Datastore. The suffix guarantees uniqueness of
     * the Global Datastore name across multiple regions.</p>
     */
    inline void SetGlobalReplicationGroupIdSuffix(const char* value) { m_globalReplicationGroupIdSuffixHasBeenSet = true; m_globalReplicationGroupIdSuffix.assign(value); }

    /**
     * <p>The suffix name of a Global Datastore. The suffix guarantees uniqueness of
     * the Global Datastore name across multiple regions.</p>
     */
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupIdSuffix(const Aws::String& value) { SetGlobalReplicationGroupIdSuffix(value); return *this;}

    /**
     * <p>The suffix name of a Global Datastore. The suffix guarantees uniqueness of
     * the Global Datastore name across multiple regions.</p>
     */
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupIdSuffix(Aws::String&& value) { SetGlobalReplicationGroupIdSuffix(std::move(value)); return *this;}

    /**
     * <p>The suffix name of a Global Datastore. The suffix guarantees uniqueness of
     * the Global Datastore name across multiple regions.</p>
     */
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupIdSuffix(const char* value) { SetGlobalReplicationGroupIdSuffix(value); return *this;}


    /**
     * <p>Provides details of the Global Datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupDescription() const{ return m_globalReplicationGroupDescription; }

    /**
     * <p>Provides details of the Global Datastore</p>
     */
    inline bool GlobalReplicationGroupDescriptionHasBeenSet() const { return m_globalReplicationGroupDescriptionHasBeenSet; }

    /**
     * <p>Provides details of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupDescription(const Aws::String& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = value; }

    /**
     * <p>Provides details of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupDescription(Aws::String&& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = std::move(value); }

    /**
     * <p>Provides details of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupDescription(const char* value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription.assign(value); }

    /**
     * <p>Provides details of the Global Datastore</p>
     */
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(const Aws::String& value) { SetGlobalReplicationGroupDescription(value); return *this;}

    /**
     * <p>Provides details of the Global Datastore</p>
     */
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(Aws::String&& value) { SetGlobalReplicationGroupDescription(std::move(value)); return *this;}

    /**
     * <p>Provides details of the Global Datastore</p>
     */
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(const char* value) { SetGlobalReplicationGroupDescription(value); return *this;}


    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline const Aws::String& GetPrimaryReplicationGroupId() const{ return m_primaryReplicationGroupId; }

    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline bool PrimaryReplicationGroupIdHasBeenSet() const { return m_primaryReplicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline void SetPrimaryReplicationGroupId(const Aws::String& value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId = value; }

    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline void SetPrimaryReplicationGroupId(Aws::String&& value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId = std::move(value); }

    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline void SetPrimaryReplicationGroupId(const char* value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId.assign(value); }

    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline CreateGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(const Aws::String& value) { SetPrimaryReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline CreateGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(Aws::String&& value) { SetPrimaryReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline CreateGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(const char* value) { SetPrimaryReplicationGroupId(value); return *this;}

  private:

    Aws::String m_globalReplicationGroupIdSuffix;
    bool m_globalReplicationGroupIdSuffixHasBeenSet;

    Aws::String m_globalReplicationGroupDescription;
    bool m_globalReplicationGroupDescriptionHasBeenSet;

    Aws::String m_primaryReplicationGroupId;
    bool m_primaryReplicationGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
