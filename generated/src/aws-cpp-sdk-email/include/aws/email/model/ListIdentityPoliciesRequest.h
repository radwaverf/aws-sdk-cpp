﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to return a list of sending authorization policies that
   * are attached to an identity. Sending authorization is an Amazon SES feature that
   * enables you to authorize other senders to use your identities. For information,
   * see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentityPoliciesRequest">AWS
   * API Reference</a></p>
   */
  class ListIdentityPoliciesRequest : public SESRequest
  {
  public:
    AWS_SES_API ListIdentityPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIdentityPolicies"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identity that is associated with the policy for which the policies will
     * be listed. You can specify an identity by using its name or by using its Amazon
     * Resource Name (ARN). Examples: <code>user@example.com</code>,
     * <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity that is associated with the policy for which the policies will
     * be listed. You can specify an identity by using its name or by using its Amazon
     * Resource Name (ARN). Examples: <code>user@example.com</code>,
     * <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * <p>The identity that is associated with the policy for which the policies will
     * be listed. You can specify an identity by using its name or by using its Amazon
     * Resource Name (ARN). Examples: <code>user@example.com</code>,
     * <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity that is associated with the policy for which the policies will
     * be listed. You can specify an identity by using its name or by using its Amazon
     * Resource Name (ARN). Examples: <code>user@example.com</code>,
     * <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * <p>The identity that is associated with the policy for which the policies will
     * be listed. You can specify an identity by using its name or by using its Amazon
     * Resource Name (ARN). Examples: <code>user@example.com</code>,
     * <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The identity that is associated with the policy for which the policies will
     * be listed. You can specify an identity by using its name or by using its Amazon
     * Resource Name (ARN). Examples: <code>user@example.com</code>,
     * <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline ListIdentityPoliciesRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity that is associated with the policy for which the policies will
     * be listed. You can specify an identity by using its name or by using its Amazon
     * Resource Name (ARN). Examples: <code>user@example.com</code>,
     * <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline ListIdentityPoliciesRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * <p>The identity that is associated with the policy for which the policies will
     * be listed. You can specify an identity by using its name or by using its Amazon
     * Resource Name (ARN). Examples: <code>user@example.com</code>,
     * <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p> <p>To
     * successfully call this API, you must own the identity.</p>
     */
    inline ListIdentityPoliciesRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
