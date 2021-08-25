// BlueprintGeneratedClass Mod017.Mod017_C
// Size: 0x428 (Inherited: 0x2b0)
struct AMod017_C : AModBaseV2_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct U017_SaveData_C* SaveData; // 0x2b8(0x08)
	struct FString Save File Name; // 0x2c0(0x10)
	struct U017_UI_C* UI; // 0x2d0(0x08)
	bool Enabled; // 0x2d8(0x01)
	char UnknownData_2D9[0x7]; // 0x2d9(0x07)
	struct TMap<struct FString, float> Enemy Weights; // 0x2e0(0x50)
	struct TArray<struct FString> Exceptions; // 0x330(0x10)
	int32_t Default Limit; // 0x340(0x04)
	float FPS Avg Period; // 0x344(0x04)
	float FPS Cull Sensitivity; // 0x348(0x04)
	float Grabber Distance Threshold; // 0x34c(0x04)
	int32_t Current Enemy Limit; // 0x350(0x04)
	int32_t Current Swarmer Limit; // 0x354(0x04)
	struct TMap<struct AActor*, float> Enemies; // 0x358(0x50)
	struct TMap<struct AActor*, float> Swarmers; // 0x3a8(0x50)
	float Time Since Load; // 0x3f8(0x04)
	char UnknownData_3FC[0x4]; // 0x3fc(0x04)
	struct TArray<float> Frame Age; // 0x400(0x10)
	float Current FPS; // 0x410(0x04)
	char UnknownData_414[0x4]; // 0x414(0x04)
	struct UCommonHUD_C* Common HUD; // 0x418(0x08)
	struct U017_HUD_C* HUD Element; // 0x420(0x08)

	void Player Is Down(struct AActor* Pawn, bool Is Down); // Function Mod017.Mod017_C.Player Is Down
	void Get Low FPS Limit(struct TMap<struct AActor*, float> Actors, int32_t Limit); // Function Mod017.Mod017_C.Get Low FPS Limit
	void Cull on Low FPS(bool Value); // Function Mod017.Mod017_C.Cull on Low FPS
	void Is Active Grabber(struct AActor* Actor, bool Is Active); // Function Mod017.Mod017_C.Is Active Grabber
	void Get Newest(struct TMap<struct AActor*, float> Actors, struct AActor* Oldest); // Function Mod017.Mod017_C.Get Newest
	void Get Oldest(struct TMap<struct AActor*, float> Actors, struct AActor* Oldest); // Function Mod017.Mod017_C.Get Oldest
	void Get Weighted(struct TMap<struct AActor*, float> Actors, struct AActor* Actor); // Function Mod017.Mod017_C.Get Weighted
	void Cull(struct TMap<struct AActor*, float> Actors, int32_t Target Cap, bool Only Swarmers, struct TMap<struct AActor*, float> Remaining Actors); // Function Mod017.Mod017_C.Cull
	void Update Entity Counts(); // Function Mod017.Mod017_C.Update Entity Counts
	void Update Swarmers(); // Function Mod017.Mod017_C.Update Swarmers
	void Update Enemies(); // Function Mod017.Mod017_C.Update Enemies
	void IsExceptionCreature(struct APawn* Pawn, bool Is Exception); // Function Mod017.Mod017_C.IsExceptionCreature
	void IsCreature(struct APawn* Pawn, bool Is Creature); // Function Mod017.Mod017_C.IsCreature
	void IsCritter(struct APawn* Pawn, bool Is Critter); // Function Mod017.Mod017_C.IsCritter
	void ReceiveBeginPlay(); // Function Mod017.Mod017_C.ReceiveBeginPlay
	void Initialise(struct APlayerController* LocalPlayer); // Function Mod017.Mod017_C.Initialise
	void EnforceCap(); // Function Mod017.Mod017_C.EnforceCap
	void Start(); // Function Mod017.Mod017_C.Start
	void Stop(); // Function Mod017.Mod017_C.Stop
	void ReceiveDestroyed(); // Function Mod017.Mod017_C.ReceiveDestroyed
	void ReceiveEndPlay(char EndPlayReason); // Function Mod017.Mod017_C.ReceiveEndPlay
	void Save(); // Function Mod017.Mod017_C.Save
	void ReceiveTick(float DeltaSeconds); // Function Mod017.Mod017_C.ReceiveTick
	void Kill All(); // Function Mod017.Mod017_C.Kill All
	void ExecuteUbergraph_Mod017(int32_t EntryPoint); // Function Mod017.Mod017_C.ExecuteUbergraph_Mod017
};

