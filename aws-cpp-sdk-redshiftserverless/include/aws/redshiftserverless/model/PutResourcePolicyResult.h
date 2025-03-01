﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshiftserverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshiftserverless/model/ResourcePolicy.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class AWS_REDSHIFTSERVERLESS_API PutResourcePolicyResult
  {
  public:
    PutResourcePolicyResult();
    PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The policy that was created or updated.</p>
     */
    inline const ResourcePolicy& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>The policy that was created or updated.</p>
     */
    inline void SetResourcePolicy(const ResourcePolicy& value) { m_resourcePolicy = value; }

    /**
     * <p>The policy that was created or updated.</p>
     */
    inline void SetResourcePolicy(ResourcePolicy&& value) { m_resourcePolicy = std::move(value); }

    /**
     * <p>The policy that was created or updated.</p>
     */
    inline PutResourcePolicyResult& WithResourcePolicy(const ResourcePolicy& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>The policy that was created or updated.</p>
     */
    inline PutResourcePolicyResult& WithResourcePolicy(ResourcePolicy&& value) { SetResourcePolicy(std::move(value)); return *this;}

  private:

    ResourcePolicy m_resourcePolicy;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
