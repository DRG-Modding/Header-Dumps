// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapPrivilegesFunctionLibrary : UBlueprintFunctionLibrary {

	bool RequestPrivilegeAsync(enum class EMagicLeapPrivilege Privilege, FDelegate ResultDelegate);
	bool RequestPrivilege(enum class EMagicLeapPrivilege Privilege);
	bool CheckPrivilege(enum class EMagicLeapPrivilege Privilege);
};

