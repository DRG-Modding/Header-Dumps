#ifndef UE4SS_SDK_TestLobbyGameMode_HPP
#define UE4SS_SDK_TestLobbyGameMode_HPP

class ATestLobbyGameMode_C : public AGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void OnFailure_CAB842EC41BAFB8B6D6C0595A9F96FB4();
    void OnSuccess_CAB842EC41BAFB8B6D6C0595A9F96FB4();
    void Join Session(FBlueprintSessionResult Session Result);
    void ExecuteUbergraph_TestLobbyGameMode(int32 EntryPoint);
};

#endif
