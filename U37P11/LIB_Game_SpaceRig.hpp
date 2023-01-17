#ifndef UE4SS_SDK_LIB_Game_SpaceRig_HPP
#define UE4SS_SDK_LIB_Game_SpaceRig_HPP

class ULIB_Game_SpaceRig_C : public UBlueprintFunctionLibrary
{

    void RefreshSpacerigUpgradePreview(class APlayerController* PlayerController, class UObject* __WorldContext);
    void GetSpaceRigUpgradePreview(class APlayerController* PlayerController, class UObject* __WorldContext, class UItemUpgrade*& PreviewUpgrade);
    void SetSpaceRigUpgradePreview(class APlayerController* PlayerController, class UItemUpgrade* ItemUpgrade, class UObject* __WorldContext);
    void GetSRGameState(class UObject* __WorldContext, class ABP_GameState_SpaceRig_C*& GameState);
    void GetSRController(class UObject* __WorldContext, class ABP_SR_PlayerControllerBase_C*& SRController);
};

#endif
