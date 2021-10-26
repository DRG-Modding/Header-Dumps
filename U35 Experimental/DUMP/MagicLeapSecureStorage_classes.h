// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapSecureStorage : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) bool PutSecureVector(FString Key, FVector DataToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureTransform(FString Key, FTransform DataToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureString(FString Key, FString DataToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureSaveGame(FString Key, USaveGame* ObjectToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureRotator(FString Key, FRotator DataToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureInt64(FString Key, int64_t DataToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureInt(FString Key, int32_t DataToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureFloat(FString Key, float DataToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureByte(FString Key, char DataToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureBool(FString Key, bool DataToStore);
	UFUNCTION(BlueprintCallable) bool PutSecureArray(FString Key, TArray<int32_t> DataToStore);
	UFUNCTION(BlueprintCallable) bool GetSecureVector(FString Key, FVector DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureTransform(FString Key, FTransform DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureString(FString Key, FString DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureSaveGame(FString Key, USaveGame* ObjectToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureRotator(FString Key, FRotator DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureInt64(FString Key, int64_t DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureInt(FString Key, int32_t DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureFloat(FString Key, float DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureByte(FString Key, char DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureBool(FString Key, bool DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool GetSecureArray(FString Key, TArray<int32_t> DataToRetrieve);
	UFUNCTION(BlueprintCallable) bool DeleteSecureData(FString Key);
};

