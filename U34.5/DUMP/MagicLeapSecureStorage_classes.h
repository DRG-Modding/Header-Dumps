// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapSecureStorage : UBlueprintFunctionLibrary {

	bool PutSecureVector(FString Key, FVector DataToStore);
	bool PutSecureTransform(FString Key, FTransform DataToStore);
	bool PutSecureString(FString Key, FString DataToStore);
	bool PutSecureSaveGame(FString Key, USaveGame* ObjectToStore);
	bool PutSecureRotator(FString Key, FRotator DataToStore);
	bool PutSecureInt64(FString Key, int64_t DataToStore);
	bool PutSecureInt(FString Key, int32_t DataToStore);
	bool PutSecureFloat(FString Key, float DataToStore);
	bool PutSecureByte(FString Key, char DataToStore);
	bool PutSecureBool(FString Key, bool DataToStore);
	bool PutSecureArray(FString Key, TArray<int32_t> DataToStore);
	bool GetSecureVector(FString Key, FVector DataToRetrieve);
	bool GetSecureTransform(FString Key, FTransform DataToRetrieve);
	bool GetSecureString(FString Key, FString DataToRetrieve);
	bool GetSecureSaveGame(FString Key, USaveGame* ObjectToRetrieve);
	bool GetSecureRotator(FString Key, FRotator DataToRetrieve);
	bool GetSecureInt64(FString Key, int64_t DataToRetrieve);
	bool GetSecureInt(FString Key, int32_t DataToRetrieve);
	bool GetSecureFloat(FString Key, float DataToRetrieve);
	bool GetSecureByte(FString Key, char DataToRetrieve);
	bool GetSecureBool(FString Key, bool DataToRetrieve);
	bool GetSecureArray(FString Key, TArray<int32_t> DataToRetrieve);
	bool DeleteSecureData(FString Key);
};

