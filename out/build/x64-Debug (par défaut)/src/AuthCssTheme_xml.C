// This is automatically generated code -- do not edit!
// Generated from  
#include <vector>
namespace skeletons
{


  const char * AuthCssTheme_xml1 = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n"
  "<messages xmlns:if=\"Wt.WTemplate.conditions\">\r\n"
  "  <message id=\"Wt.Auth.field\">\r\n"
  "    <![CDATA[\r\n"
  "    ${<if:{1}>}\r\n"
  "      <label for=\"${id:{1}}\">${tr:Wt.Auth.{1}}\r\n"
  "        ${{1}-info class=\"Wt-info\"}\r\n"
  "      </label>\r\n"
  "      ${{1}}\r\n"
  "    ${</if:{1}>}\r\n"
  "    ]]>\r\n"
  "  </message>\r\n"
  "\r\n"
  "  <message id=\"Wt.Auth.template.login\">\r\n"
  "    <div class=\"Wt-form Wt-auth-login\">\r\n"
  "      <h2>${tr:Wt.Auth.login-form-title}</h2>\r\n"
  "      <p>${tr:Wt.Auth.login-form-info}</p>\r\n"
  "\r\n"
  "      <div class=\"Wt-fields\">\r\n"
  "	${<if:passwords>}\r\n"
  "          <label for=\"${id:user-name}\">${user-name-label}\r\n"
  "            ${user-name-info class=\"Wt-info\"}\r\n"
  "	  </label>\r\n"
  "	  ${user-name}\r\n"
  "\r\n"
  "	  ${block:Wt.Auth.field password}\r\n"
  "	  ${block:Wt.Auth.field remember-me}\r\n"
  "	 ${</if:passwords>}\r\n"
  "      </div>\r\n"
  "\r\n"
  "      ${<if:oauth>}\r\n"
  "\r\n"
  "        <div class=\"Wt-col-right\">\r\n"
  "	  <h3>Or use:</h3>\r\n"
  "	  ${icons}\r\n"
  "	</div>\r\n"
  "\r\n"
  "      ${</if:oauth>}\r\n"
  "\r\n"
  "      <div class=\"Wt-buttons\">\r\n"
  "	${login}\r\n"
  "      </div>\r\n"
  "\r\n"
  "      <div class=\"Wt-buttons\">\r\n"
  "	${lost-password} ${sep} ${register}\r\n"
  "      </div>\r\n"
  "    </div>\r\n"
  "  </message>\r\n"
  "\r\n"
  "  <message id=\"Wt.Auth.template.registration\">\r\n"
  "    <div class=\"Wt-form Wt-auth-registration\">\r\n"
  "      <h2>${tr:Wt.Auth.registration-form-title}</h2>\r\n"
  "      <p>${tr:Wt.Auth.registration-form-info}</p>\r\n"
  "\r\n"
  "      ${password-description}\r\n"
  "\r\n"
  "      <div class=\"Wt-fields\">\r\n"
  "        ${<if:user-name>}\r\n"
  "	  <label for=\"${id:user-name}\">${user-name-label}\r\n"
  "	    ${user-name-info class=\"Wt-info\"}\r\n"
  "	    ${confirm-is-you class=\"Wt-info\"}\r\n"
  "	  </label>\r\n"
  "	  ${user-name}\r\n"
  "	${</if:user-name>}\r\n"
  "\r\n"
  "	${block:Wt.Auth.field choose-password}\r\n"
  "	${block:Wt.Auth.field repeat-password}\r\n"
  "	${block:Wt.Auth.field email}\r\n"
  "      </div>\r\n"
  "\r\n"
  "      ${<if:oauth>}\r\n"
  "        <br clear=\"both\" />\r\n"
  "	${oauth-description}\r\n"
  "	<label>${tr:Wt.Auth.oauth}\r\n"
  "	  <span class=\"Wt-info\">${tr:Wt.Auth.oauth-info}</span>\r\n"
  "	</label>\r\n"
  "	${icons}\r\n"
  "      ${</if:oauth>}\r\n"
  "\r\n"
  "      <div class=\"Wt-buttons\">\r\n"
  "	${ok-button} ${cancel-button}\r\n"
  "      </div>\r\n"
  "    </div>\r\n"
  "  </message>\r\n"
  "\r\n"
  "  <message id=\"Wt.Auth.template.update-password\">\r\n"
  "    <div class=\"Wt-form Wt-auth-update-password\">\r\n"
  "      <h2>${tr:Wt.Auth.update-password-form-title}</h2>\r\n"
  "      <p>${tr:Wt.Auth.update-password-form-info}</p>\r\n"
  "\r\n"
  "      <div class=\"Wt-fields\">\r\n"
  "	<label for=\"${id:user-name}\">${tr:Wt.Auth.user-name}\r\n"
  "	</label>\r\n"
  "	${user-name}\r\n"
  "\r\n"
  "	${block:Wt.Auth.field password}\r\n"
  "	${block:Wt.Auth.field choose-password}\r\n"
  "	${block:Wt.Auth.field repeat-password}\r\n"
  "      </div>\r\n"
  "\r\n"
  "      <div class=\"Wt-buttons\">\r\n"
  "	${ok-button} ${cancel-button}\r\n"
  "      </div>\r\n"
  "    </div>\r\n"
  "  </message>\r\n"
  "\r\n"
  "  <message id=\"Wt.Auth.template.lost-password\">\r\n"
  "    <div class=\"Wt-form Wt-auth-lost-password\">\r\n"
  "      <h2>${tr:Wt.Auth.lost-password-form-title}</h2>\r\n"
  "      <p>${tr:Wt.Auth.lost-password-form-info}</p>\r\n"
  "\r\n"
  "      <div class=\"Wt-fields\">\r\n"
  "	<label for=\"${id:email}\">${tr:Wt.Auth.email}\r\n"
  "	  <span class=\"Wt-info\">${tr:Wt.Auth.email-info}</span>\r\n"
  "	</label>\r\n"
  "	${email}\r\n"
  "      </div>\r\n"
  "\r\n"
  "      <div class=\"Wt-buttons\">\r\n"
  "	${send-button} ${cancel-button}\r\n"
  "      </div>\r\n"
  "    </div>\r\n"
  "  </message>\r\n"
  "\r\n"
  "  <message id=\"Wt.Auth.template.password-prompt\">\r\n"
  "    <div class=\"Wt-form Wt-auth-password-prompt\">\r\n"
  "      <h2>${tr:Wt.Auth.password-prompt-form-title}</h2>\r\n"
  "      <p>${tr:Wt.Auth.password-prompt-form-info}</p>\r\n"
  "\r\n"
  "      <div class=\"Wt-fields\">\r\n"
  "	<label for=\"${id:user-name}\">${tr:Wt.Auth.user-name}\r\n"
  "	</label>\r\n"
  "	${user-name}\r\n"
  "\r\n"
  "	${block:Wt.Auth.field password}\r\n"
  "      </div>\r\n"
  "\r\n"
  "      <div class=\"Wt-buttons\">\r\n"
  "	${ok-button} ${cancel-button}\r\n"
  "      </div>\r\n"
  "    </div>\r\n"
  "  </message>\r\n"
  "\r\n"
  "  <message id=\"Wt.Auth.template.logged-in\">\r\n"
  "    <div class=\"Wt-auth-logged-in\">\r\n"
  "      <b>${user-name}</b> ${logout}\r\n"
  "    </div>\r\n"
  "  </message>\r\n"
  "</messages>\r\n"
  "";
  std::vector<const char *> AuthCssTheme_xml()
  {
    std::vector<const char *> retval;

    retval.push_back(AuthCssTheme_xml1);

    return retval;
  }
}