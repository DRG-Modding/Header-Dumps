// BlueprintGeneratedClass BaseLibrary.BaseLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBaseLibrary_C : UBlueprintFunctionLibrary {

	FString Linear Color to RGB(FLinearColor LinearColor, UObject* __WorldContext);
	void RGB to Linear Color(FString RGBA String, UObject* __WorldContext, FLinearColor Color);
	FVector Random Vector In Range(FVector Min, FVector Max, UObject* __WorldContext);
	void Get Downed Players(UObject* __WorldContext, TArray<APlayerController*> Player Controllers);
	void Preload Content Assets(UObject* __WorldContext);
	void Replace Substring(FString Original, FString Substring, FString Replace With, UObject* __WorldContext, FString Return Value);
	void Is Scout Class(APlayerController* Player Controller, UObject* __WorldContext, bool Is Scout);
	void Is Gunner Class(APlayerController* Player Controller, UObject* __WorldContext, bool Is Gunner);
	void Is Engineer Class(APlayerController* Player Controller, UObject* __WorldContext, bool Is Engineer);
	void Is Driller Class(APlayerController* Player Controller, UObject* __WorldContext, bool Is Driller);
	void Is Local Player(APlayerController* Player Controller, UObject* __WorldContext, bool Result);
	void Is Player Down(APlayerController* Player Controller, UObject* __WorldContext, bool Is Downed);
	void Get Players By Class(enum class EPlayerClass Dwarf Class, UObject* __WorldContext, TArray<APlayerController*> Player Controllers);
	void Get Random Player(UObject* __WorldContext, APlayerController* Player Controller);
	void Get All Player Pawns(UObject* __WorldContext, TArray<APawn*> Pawns);
	void Get All Players(UObject* __WorldContext, TArray<APlayerController*> Player Controllers);
	void Get Local Player(UObject* __WorldContext, APlayerController* Controller);
	void Run Console Command(FString Command, UObject* __WorldContext);
	void Is Level Space Rig(UObject* __WorldContext, bool Result);
};

