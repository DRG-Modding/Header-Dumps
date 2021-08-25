// BlueprintGeneratedClass Mod026.Mod026_C
// Size: 0x548 (Inherited: 0x2b0)
struct AMod026_C : AModBaseV2_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct FString Save File Path; // 0x2b8(0x10)
	struct U026_SaveData_C* Save Data; // 0x2c8(0x08)
	struct FName Processed Tag; // 0x2d0(0x08)
	struct FName Mod Tag; // 0x2d8(0x08)
	struct FTimerHandle Main Loop Timer; // 0x2e0(0x08)
	struct TMap<struct AActor*, float> Beacon Times; // 0x2e8(0x50)
	struct TMap<struct AActor*, struct FVector> Beacon With Pod Location; // 0x338(0x50)
	float Min Beacon Lifetime; // 0x388(0x04)
	float Max Beacon Lifetime; // 0x38c(0x04)
	struct TMap<struct AActor*, float> Normal Drops; // 0x390(0x50)
	float Normal Pod Lifetime; // 0x3e0(0x04)
	float Total Time; // 0x3e4(0x04)
	float Time Passed; // 0x3e8(0x04)
	char UnknownData_3EC[0x4]; // 0x3ec(0x04)
	struct FString Terrain Name; // 0x3f0(0x10)
	float Current Nitra; // 0x400(0x04)
	char UnknownData_404[0x4]; // 0x404(0x04)
	struct TMap<struct FString, float> Enemy Nitra Values; // 0x408(0x50)
	float Pod Nitra Cost; // 0x458(0x04)
	float Grunts Till Empty; // 0x45c(0x04)
	float Resupplies Per Pod; // 0x460(0x04)
	char UnknownData_464[0xc]; // 0x464(0x0c)
	struct FTransform Normal Pod Transform; // 0x470(0x30)
	struct TMap<struct AActor*, struct FVector> Pods To Remove With Target Location; // 0x4a0(0x50)
	float Sink Speed; // 0x4f0(0x04)
	float Sink Distance; // 0x4f4(0x04)
	struct TMap<struct AActor*, float> Pods To Remove With Wait Time; // 0x4f8(0x50)

	void Spawn Beacons Now(); // Function Mod026.Mod026_C.Spawn Beacons Now
	void Get Current Beacon Locations(struct TArray<struct FVector> Locations); // Function Mod026.Mod026_C.Get Current Beacon Locations
	void Is Player Down(struct APawn* Pawn, bool Is Down); // Function Mod026.Mod026_C.Is Player Down
	void Add Pods To Remove(); // Function Mod026.Mod026_C.Add Pods To Remove
	void Ignore All Enemies(); // Function Mod026.Mod026_C.Ignore All Enemies
	void Spawn Single Beacon(struct FVector Start Location); // Function Mod026.Mod026_C.Spawn Single Beacon
	void Get Beacon Location(struct FVector Start Location, struct TArray<struct FVector> Other Beacon Locations, struct FVector Location); // Function Mod026.Mod026_C.Get Beacon Location
	void Get Random Player Location(struct FVector Location); // Function Mod026.Mod026_C.Get Random Player Location
	void Add Nitra for New Enemies(); // Function Mod026.Mod026_C.Add Nitra for New Enemies
	void Get Pod Transform(struct FVector Location, struct FTransform Transform); // Function Mod026.Mod026_C.Get Pod Transform
	void Get Ceiling(struct FVector Start, struct FVector Ceiling); // Function Mod026.Mod026_C.Get Ceiling
	void Process Beacons(struct ABP_SupplyPod_Beacon_C* Start Beacon, struct FVector Start Point, struct TMap<struct AActor*, struct FVector> Beacons And Pod Locations); // Function Mod026.Mod026_C.Process Beacons
	void ReceiveBeginPlay(); // Function Mod026.Mod026_C.ReceiveBeginPlay
	void Initialise(struct APlayerController* LocalPlayer); // Function Mod026.Mod026_C.Initialise
	void Save(); // Function Mod026.Mod026_C.Save
	void ReceiveEndPlay(char EndPlayReason); // Function Mod026.Mod026_C.ReceiveEndPlay
	void ReceiveDestroyed(); // Function Mod026.Mod026_C.ReceiveDestroyed
	void Main Loop(); // Function Mod026.Mod026_C.Main Loop
	void Start(); // Function Mod026.Mod026_C.Start
	void Stop(); // Function Mod026.Mod026_C.Stop
	void ReceiveTick(float DeltaSeconds); // Function Mod026.Mod026_C.ReceiveTick
	void Spawn Now(); // Function Mod026.Mod026_C.Spawn Now
	void ExecuteUbergraph_Mod026(int32_t EntryPoint); // Function Mod026.Mod026_C.ExecuteUbergraph_Mod026
};

