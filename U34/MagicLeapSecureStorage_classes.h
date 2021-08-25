// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapSecureStorage : UBlueprintFunctionLibrary {

	bool PutSecureVector(struct FString Key, struct FVector DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
	bool PutSecureTransform(struct FString Key, struct FTransform DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
	bool PutSecureString(struct FString Key, struct FString DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
	bool PutSecureSaveGame(struct FString Key, struct USaveGame* ObjectToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
	bool PutSecureRotator(struct FString Key, struct FRotator DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
	bool PutSecureInt64(struct FString Key, int64_t DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
	bool PutSecureInt(struct FString Key, int32_t DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
	bool PutSecureFloat(struct FString Key, float DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
	bool PutSecureByte(struct FString Key, char DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
	bool PutSecureBool(struct FString Key, bool DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
	bool PutSecureArray(struct FString Key, struct TArray<int32_t> DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
	bool GetSecureVector(struct FString Key, struct FVector DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
	bool GetSecureTransform(struct FString Key, struct FTransform DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
	bool GetSecureString(struct FString Key, struct FString DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
	bool GetSecureSaveGame(struct FString Key, struct USaveGame* ObjectToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
	bool GetSecureRotator(struct FString Key, struct FRotator DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
	bool GetSecureInt64(struct FString Key, int64_t DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
	bool GetSecureInt(struct FString Key, int32_t DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
	bool GetSecureFloat(struct FString Key, float DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
	bool GetSecureByte(struct FString Key, char DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
	bool GetSecureBool(struct FString Key, bool DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
	bool GetSecureArray(struct FString Key, struct TArray<int32_t> DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
	bool DeleteSecureData(struct FString Key); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
};

