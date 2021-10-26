// Class MagicLeapIdentity.MagicLeapIdentity
// Size: 0x38 (Inherited: 0x28)
struct UMagicLeapIdentity : UObject {

	UFUNCTION(BlueprintCallable) void RequestIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<FMagicLeapIdentityAttribute> AttributeValue);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapIdentityError RequestAttributeValueAsync(TArray<enum class EMagicLeapIdentityKey> RequestedAttributeList, FDelegate ResultDelegate);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapIdentityError RequestAttributeValue(TArray<enum class EMagicLeapIdentityKey> RequestedAttributeList, TArray<FMagicLeapIdentityAttribute> RequestedAttributeValues);
	UFUNCTION(BlueprintCallable) void ModifyIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<enum class EMagicLeapIdentityKey> AttributesUpdatedSuccessfully);
	UFUNCTION(BlueprintCallable) void GetAllAvailableAttributesAsync(FDelegate ResultDelegate);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapIdentityError GetAllAvailableAttributes(TArray<enum class EMagicLeapIdentityKey> AvailableAttributes);
	UFUNCTION(BlueprintCallable) void AvailableIdentityAttributesDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<enum class EMagicLeapIdentityKey> AvailableAttributes);
};

