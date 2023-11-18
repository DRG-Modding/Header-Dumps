#ifndef UE4SS_SDK_PLS_Base_HPP
#define UE4SS_SDK_PLS_Base_HPP

class APLS_Base_C : public AProceduralSetup
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UMaterial* OutlineMaterial;
    TArray<class URoomGenerator*> Starting Rooms;
    FPLS_Base_CCompletedGenerationPass CompletedGenerationPass;
    void CompletedGenerationPass(int32 pass, TEnumAsByte<PLS_Passes::Type> PLS Pass);
    class UMusicLibrary* MusicOverride;

    void EnsureSafelandingsite();
    class UProceduralController* GetProceduralController();
    void SpawnCriticalItems(ECriticalItemPass pass);
    bool HasSelectedCharacter();
    void CallGenerationComplete(int32 pass, TEnumAsByte<PLS_Passes::Type> PLS Pass);
    void PlayMusicAndAmbient(int32 musicIndex);
    void SaveInitialState();
    void CreateCaveGraph();
    void GetRandomRoom(TArray<class URoomGenerator*>& Rooms, bool RemoveRoom, class URoomGenerator*& Room);
    void OnLoaded_11827D59481E498DEC10999DAE2915BF(UClass* Loaded);
    void OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(UClass* Loaded);
    void ReceiveBeginPlay();
    void BaseLayerCommitDone();
    void FinalCommitDone();
    void CreateSpawn();
    void Generate_Graph();
    void Generate_Pass_1();
    void Generate_Pass_3();
    void Final Pass();
    void Generate_Pass_5_Server();
    void Generate_Pass_5_Clients();
    void GenerateLandscape();
    void Generate_Pass_4();
    void Generate_Pass_7();
    void BeginLiveGeneration();
    void OnPLSDataRecieved();
    void AddRoomToInitialState(const FRoomNode& RoomNode);
    void CreateGraphSecondPass();
    void Generate_Tunnels();
    void StartGenerationOnClient(class AFSDPlayerController* client);
    void GenerateLandscapeFromData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& Obstacles);
    void CarveTunnels();
    void Generate_Pass_0();
    void Generate_Pass_0_Client();
    void OnCarverDataRecieved(EDebrisItemPass pass);
    void Generate_Pass_2();
    void Generate_Pass_6();
    void Generate_CriticalLargePass();
    void Generate_CriticalLargePass_Client();
    void StartMusicAndAmbient(int32 Music);
    void ExecuteUbergraph_PLS_Base(int32 EntryPoint);
    void CompletedGenerationPass__DelegateSignature(int32 pass, TEnumAsByte<PLS_Passes::Type> PLS Pass);
};

#endif
