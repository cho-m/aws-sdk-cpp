﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshiftserverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshiftserverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFTSERVERLESS_API GetNamespaceRequest : public RedshiftServerlessRequest
  {
  public:
    GetNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNamespace"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the namespace to retrieve information for.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace to retrieve information for.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namespace to retrieve information for.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namespace to retrieve information for.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace to retrieve information for.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace to retrieve information for.</p>
     */
    inline GetNamespaceRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace to retrieve information for.</p>
     */
    inline GetNamespaceRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace to retrieve information for.</p>
     */
    inline GetNamespaceRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}

  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
