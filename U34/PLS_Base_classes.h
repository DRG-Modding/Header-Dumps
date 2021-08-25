// BlueprintGeneratedClass PLS_Base.PLS_Base_C
// Size: 0x578 (Inherited: 0x528)
struct APLS_Base_C : AProceduralSetup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x530(0x08)
	struct UMaterial* OutlineMaterial; // 0x538(0x08)
	struct TArray<struct URoomGenerator*> Starting Rooms; // 0x540(0x10)
	struct TArray<struct URoomGeneratorGroup*> RoomGroups; // 0x550(0x10)
	struct FMulticastInlineDelegate CompletedGenerationPass; // 0x560(0x10)
	struct UMusicLibrary* MusicOverride; // 0x570(0x08)

	void EnsureSafelandingsite(); // Function PLS_Base.PLS_Base_C.EnsureSafelandingsite
	void GetPathSize(struct TArray<struct FVector> Tunnels, float Length1); // Function PLS_Base.PLS_Base_C.GetPathSize
	void PrintTUnnel(); // Function PLS_Base.PLS_Base_C.PrintTUnnel
	struct UProceduralController* GetProceduralController(); // Function PLS_Base.PLS_Base_C.GetProceduralController
	void SpawnCriticalItems(); // Function PLS_Base.PLS_Base_C.SpawnCriticalItems
	bool HasSelectedCharacter(); // Function PLS_Base.PLS_Base_C.HasSelectedCharacter
	void CallGenerationComplete(int32_t pass, char PLS Pass); // Function PLS_Base.PLS_Base_C.CallGenerationComplete
	void PlayMusicAndAmbient(); // Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient
	void SaveInitialState(); // Function PLS_Base.PLS_Base_C.SaveInitialState
	void GetRoomFromRandomGroup(struct URoomGenerator* Room); // Function PLS_Base.PLS_Base_C.GetRoomFromRandomGroup
	void CreateCaveGraph(); // Function PLS_Base.PLS_Base_C.CreateCaveGraph
	void GetRandomRoom(struct TArray<struct URoomGenerator*> Rooms, bool RemoveRoom, struct URoomGenerator* Room); // Function PLS_Base.PLS_Base_C.GetRandomRoom
	void OnLoaded_11827D59481E498DEC10999DAE2915BF(struct UObject* Loaded); // Function PLS_Base.PLS_Base_C.OnLoaded_11827D59481E498DEC10999DAE2915BF
	void OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(struct UObject* Loaded); // Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8
	void ReceiveBeginPlay(); // Function PLS_Base.PLS_Base_C.ReceiveBeginPlay
	void BaseLayerCommitDone(); // Function PLS_Base.PLS_Base_C.BaseLayerCommitDone
	void FinalCommitDone(); // Function PLS_Base.PLS_Base_C.FinalCommitDone
	void CreateSpawn(); // Function PLS_Base.PLS_Base_C.CreateSpawn
	void Generate_Graph(); // Function PLS_Base.PLS_Base_C.Generate_Graph
	void Generate_Pass_2(); // Function PLS_Base.PLS_Base_C.Generate_Pass_2
	void Generate_Pass_3(); // Function PLS_Base.PLS_Base_C.Generate_Pass_3
	void Final Pass(); // Function PLS_Base.PLS_Base_C.Final Pass
	void Generate_Pass_4_Server(); // Function PLS_Base.PLS_Base_C.Generate_Pass_4_Server
	void Generate_Pass_4_Clients(); // Function PLS_Base.PLS_Base_C.Generate_Pass_4_Clients
	void GenerateLandscape(); // Function PLS_Base.PLS_Base_C.GenerateLandscape
	void Generate_Pass_03(); // Function PLS_Base.PLS_Base_C.Generate_Pass_03
	void Generate_Pass_6(); // Function PLS_Base.PLS_Base_C.Generate_Pass_6
	void BeginLiveGeneration(); // Function PLS_Base.PLS_Base_C.BeginLiveGeneration
	void OnPLSDataRecieved(); // Function PLS_Base.PLS_Base_C.OnPLSDataRecieved
	void AddRoomToInitialState(struct FRoomNode RoomNode); // Function PLS_Base.PLS_Base_C.AddRoomToInitialState
	void CreateGraphSecondPass(); // Function PLS_Base.PLS_Base_C.CreateGraphSecondPass
	void Generate_Tunnels(); // Function PLS_Base.PLS_Base_C.Generate_Tunnels
	void StartGenerationOnClient(struct AFSDPlayerController* client); // Function PLS_Base.PLS_Base_C.StartGenerationOnClient
	void GenerateLandscapeFromData(int32_t Seed, struct TArray<struct FRoomNode> Rooms, struct TArray<struct FPathObstacle> obstacles); // Function PLS_Base.PLS_Base_C.GenerateLandscapeFromData
	void CarveTunnels(); // Function PLS_Base.PLS_Base_C.CarveTunnels
	void Generate_Pass_1(); // Function PLS_Base.PLS_Base_C.Generate_Pass_1
	void Generate_Pass_0_Client(); // Function PLS_Base.PLS_Base_C.Generate_Pass_0_Client
	void OnCarverDataRecieved(enum class EDebrisItemPass pass); // Function PLS_Base.PLS_Base_C.OnCarverDataRecieved
	void ExecuteUbergraph_PLS_Base(int32_t EntryPoint); // Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base
	void CompletedGenerationPass__DelegateSignature(int32_t pass, char PLS Pass); // Function PLS_Base.PLS_Base_C.CompletedGenerationPass__DelegateSignature
};

