﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Firehose
{
namespace Model
{

  class SessionCredentials
  {
  public:
    AWS_FIREHOSE_API SessionCredentials();
    AWS_FIREHOSE_API SessionCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SessionCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    
    inline SessionCredentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    
    inline SessionCredentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    
    inline SessionCredentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }

    
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    
    inline SessionCredentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    
    inline SessionCredentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    
    inline SessionCredentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    
    inline SessionCredentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    
    inline SessionCredentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    
    inline SessionCredentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }

    
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expirationHasBeenSet = true; m_expiration = value; }

    
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expirationHasBeenSet = true; m_expiration = std::move(value); }

    
    inline SessionCredentials& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    
    inline SessionCredentials& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expiration;
    bool m_expirationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
