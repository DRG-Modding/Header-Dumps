// BlueprintGeneratedClass BaseLibrary.BaseLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBaseLibrary_C : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) FString Linear Color to RGB(FLinearColor LinearColor, UObject* __WorldContext);
	UFUNCTION(BlueprintCallable) void RGB to Linear Color(FString RGBA String, UObject* __WorldContext, FLinearColor Color);
	UFUNCTION(BlueprintCallable) FVector Random Vector In Range(FVector Min, FVector Max, UObject* __WorldContext);
	UFUNCTION(BlueprintCallable) void Get Downed Players(UObject* __WorldContext, TArray<APlayerController*> Player Controllers);
	UFUNCTION(BlueprintCallable) void Preload Content Assets(UObject* __WorldContext);
	UFUNCTION(BlueprintCallable) void Replace Substring(FString Original, FString Substring, FString Replace With, UObject* __WorldContext, FString Return Value);
	UFUNCTION(BlueprintCallable) void Is Scout Class(APlayerController* Player Controller, UObject* __WorldContext, bool Is Scout);
	UFUNCTION(BlueprintCallable) void Is Gunner Class(APlayerController* Player Controller, UObject* __WorldContext, bool Is Gunner);
	UFUNCTION(BlueprintCallable) void Is Engineer Class(APlayerController* Player Controller, UObject* __WorldContext, bool Is Engineer);
	UFUNCTION(BlueprintCallable) void Is Driller Class(APlayerController* Player Controller, UObject* __WorldContext, bool Is Driller);
	UFUNCTION(BlueprintCallable) void Is Local Player(APlayerController* Player Controller, UObject* __WorldContext, bool Result);
	UFUNCTION(BlueprintCallable) void Is Player Down(APlayerController* Player Controller, UObject* __WorldContext, bool Is Downed);
	UFUNCTION(BlueprintCallable) void Get Players By Class(char Dwarf Class, UObject* __WorldContext, TArray<APlayerController*> Player Controllers);
	UFUNCTION(BlueprintCallable) void Get Random Player(UObject* __WorldContext, APlayerController* Player Controller);
	UFUNCTION(BlueprintCallable) void Get All Player Pawns(UObject* __WorldContext, TArray<APawn*> Pawns);
	UFUNCTION(BlueprintCallable) void Get All Players(UObject* __WorldContext, TArray<APlayerController*> Player Controllers);
	UFUNCTION(BlueprintCallable) void Get Local Player(UObject* __WorldContext, APlayerController* Controller);
	UFUNCTION(BlueprintCallable) void Run Console Command(FString Command, UObject* __WorldContext);
	UFUNCTION(BlueprintCallable) void Is Level Space Rig(UObject* __WorldContext, bool Result);
};

