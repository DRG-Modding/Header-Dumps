// BlueprintGeneratedClass BaseLibrary.BaseLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBaseLibrary_C : UBlueprintFunctionLibrary {

	struct FVector Random Vector In Range(struct FVector Min, struct FVector Max, struct UObject* __WorldContext); // Function BaseLibrary.BaseLibrary_C.Random Vector In Range
	void Get Downed Players(struct UObject* __WorldContext, struct TArray<struct APlayerController*> Player Controllers); // Function BaseLibrary.BaseLibrary_C.Get Downed Players
	void Preload Content Assets(struct UObject* __WorldContext); // Function BaseLibrary.BaseLibrary_C.Preload Content Assets
	void Replace Substring(struct FString Original, struct FString Substring, struct FString Replace With, struct UObject* __WorldContext, struct FString return value); // Function BaseLibrary.BaseLibrary_C.Replace Substring
	void Is Scout Class(struct APlayerController* Player Controller, struct UObject* __WorldContext, bool Is Scout); // Function BaseLibrary.BaseLibrary_C.Is Scout Class
	void Is Gunner Class(struct APlayerController* Player Controller, struct UObject* __WorldContext, bool Is Gunner); // Function BaseLibrary.BaseLibrary_C.Is Gunner Class
	void Is Engineer Class(struct APlayerController* Player Controller, struct UObject* __WorldContext, bool Is Engineer); // Function BaseLibrary.BaseLibrary_C.Is Engineer Class
	void Is Driller Class(struct APlayerController* Player Controller, struct UObject* __WorldContext, bool Is Driller); // Function BaseLibrary.BaseLibrary_C.Is Driller Class
	void Is Local Player(struct APlayerController* Player Controller, struct UObject* __WorldContext, bool Result); // Function BaseLibrary.BaseLibrary_C.Is Local Player
	void Is Player Down(struct APlayerController* Player Controller, struct UObject* __WorldContext, bool Is Downed); // Function BaseLibrary.BaseLibrary_C.Is Player Down
	void Get Players By Class(char Dwarf Class, struct UObject* __WorldContext, struct TArray<struct APlayerController*> Player Controllers); // Function BaseLibrary.BaseLibrary_C.Get Players By Class
	void Get Random Player(struct UObject* __WorldContext, struct APlayerController* Player Controller); // Function BaseLibrary.BaseLibrary_C.Get Random Player
	void Get All Player Pawns(struct UObject* __WorldContext, struct TArray<struct APawn*> Pawns); // Function BaseLibrary.BaseLibrary_C.Get All Player Pawns
	void Get All Players(struct UObject* __WorldContext, struct TArray<struct APlayerController*> Player Controllers); // Function BaseLibrary.BaseLibrary_C.Get All Players
	void Get Local Player(struct UObject* __WorldContext, struct APlayerController* Controller); // Function BaseLibrary.BaseLibrary_C.Get Local Player
	void Run Console Command(struct FString Command, struct UObject* __WorldContext); // Function BaseLibrary.BaseLibrary_C.Run Console Command
	void Is Level Space Rig(struct UObject* __WorldContext, bool Result); // Function BaseLibrary.BaseLibrary_C.Is Level Space Rig
};

