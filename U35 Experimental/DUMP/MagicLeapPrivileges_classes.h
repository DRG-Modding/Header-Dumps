// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapPrivilegesFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) bool RequestPrivilegeAsync(enum class EMagicLeapPrivilege Privilege, FDelegate ResultDelegate);
	UFUNCTION(BlueprintCallable) bool RequestPrivilege(enum class EMagicLeapPrivilege Privilege);
	UFUNCTION(BlueprintCallable) bool CheckPrivilege(enum class EMagicLeapPrivilege Privilege);
};

