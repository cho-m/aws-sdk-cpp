﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshiftserverless/RedshiftServerless_EXPORTS.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>Describes the members of a VPC security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshiftserverless-2021-04-21/VpcSecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFTSERVERLESS_API VpcSecurityGroupMembership
  {
  public:
    VpcSecurityGroupMembership();
    VpcSecurityGroupMembership(Aws::Utils::Json::JsonView jsonValue);
    VpcSecurityGroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the VPC security group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The unique identifier of the VPC security group.</p>
     */
    inline const Aws::String& GetVpcSecurityGroupId() const{ return m_vpcSecurityGroupId; }

    /**
     * <p>The unique identifier of the VPC security group.</p>
     */
    inline bool VpcSecurityGroupIdHasBeenSet() const { return m_vpcSecurityGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the VPC security group.</p>
     */
    inline void SetVpcSecurityGroupId(const Aws::String& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = value; }

    /**
     * <p>The unique identifier of the VPC security group.</p>
     */
    inline void SetVpcSecurityGroupId(Aws::String&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the VPC security group.</p>
     */
    inline void SetVpcSecurityGroupId(const char* value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId.assign(value); }

    /**
     * <p>The unique identifier of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(const Aws::String& value) { SetVpcSecurityGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(Aws::String&& value) { SetVpcSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(const char* value) { SetVpcSecurityGroupId(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_vpcSecurityGroupId;
    bool m_vpcSecurityGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
