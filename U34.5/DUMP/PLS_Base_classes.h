// BlueprintGeneratedClass PLS_Base.PLS_Base_C
// Size: 0x578 (Inherited: 0x528)
struct APLS_Base_C : AProceduralSetup {
	FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	USceneComponent* DefaultSceneRoot; // 0x530(0x08)
	UMaterial* OutlineMaterial; // 0x538(0x08)
	TArray<URoomGenerator*> Starting Rooms; // 0x540(0x10)
	TArray<URoomGeneratorGroup*> RoomGroups; // 0x550(0x10)
	FMulticastInlineDelegate CompletedGenerationPass; // 0x560(0x10)
	UMusicLibrary* MusicOverride; // 0x570(0x08)

	void EnsureSafelandingsite();
	void GetPathSize(TArray<FVector> Tunnels, float Length1);
	void PrintTUnnel();
	UProceduralController* GetProceduralController();
	void SpawnCriticalItems();
	bool HasSelectedCharacter();
	void CallGenerationComplete(int32_t pass, enum class PLS_Passes PLS Pass);
	void PlayMusicAndAmbient();
	void SaveInitialState();
	void GetRoomFromRandomGroup(URoomGenerator* Room);
	void CreateCaveGraph();
	void GetRandomRoom(TArray<URoomGenerator*> Rooms, bool RemoveRoom, URoomGenerator* Room);
	void OnLoaded_11827D59481E498DEC10999DAE2915BF(UObject* Loaded);
	void OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(UObject* Loaded);
	void ReceiveBeginPlay();
	void BaseLayerCommitDone();
	void FinalCommitDone();
	void CreateSpawn();
	void Generate_Graph();
	void Generate_Pass_2();
	void Generate_Pass_3();
	void Final Pass();
	void Generate_Pass_4_Server();
	void Generate_Pass_4_Clients();
	void GenerateLandscape();
	void Generate_Pass_03();
	void Generate_Pass_6();
	void BeginLiveGeneration();
	void OnPLSDataRecieved();
	void AddRoomToInitialState(FRoomNode RoomNode);
	void CreateGraphSecondPass();
	void Generate_Tunnels();
	void StartGenerationOnClient(AFSDPlayerController* client);
	void GenerateLandscapeFromData(int32_t Seed, TArray<FRoomNode> Rooms, TArray<FPathObstacle> obstacles);
	void CarveTunnels();
	void Generate_Pass_1();
	void Generate_Pass_0_Client();
	void OnCarverDataRecieved(enum class EDebrisItemPass pass);
	void ExecuteUbergraph_PLS_Base(int32_t EntryPoint);
	void CompletedGenerationPass__DelegateSignature(int32_t pass, enum class PLS_Passes PLS Pass);
};

