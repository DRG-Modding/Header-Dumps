// Class MagicLeapIdentity.MagicLeapIdentity
// Size: 0x38 (Inherited: 0x28)
struct UMagicLeapIdentity : UObject {

	void RequestIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<FMagicLeapIdentityAttribute> AttributeValue);
	enum class EMagicLeapIdentityError RequestAttributeValueAsync(TArray<enum class EMagicLeapIdentityKey> RequestedAttributeList, FDelegate ResultDelegate);
	enum class EMagicLeapIdentityError RequestAttributeValue(TArray<enum class EMagicLeapIdentityKey> RequestedAttributeList, TArray<FMagicLeapIdentityAttribute> RequestedAttributeValues);
	void ModifyIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<enum class EMagicLeapIdentityKey> AttributesUpdatedSuccessfully);
	void GetAllAvailableAttributesAsync(FDelegate ResultDelegate);
	enum class EMagicLeapIdentityError GetAllAvailableAttributes(TArray<enum class EMagicLeapIdentityKey> AvailableAttributes);
	void AvailableIdentityAttributesDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<enum class EMagicLeapIdentityKey> AvailableAttributes);
};

