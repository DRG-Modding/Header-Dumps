// BlueprintGeneratedClass LIB_Game_SpaceRig.LIB_Game_SpaceRig_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Game_SpaceRig_C : UBlueprintFunctionLibrary {

	void RefreshSpacerigUpgradePreview(APlayerController* PlayerController, UObject* __WorldContext);
	void GetSpaceRigUpgradePreview(APlayerController* PlayerController, UObject* __WorldContext, UItemUpgrade* PreviewUpgrade);
	void SetSpaceRigUpgradePreview(APlayerController* PlayerController, UItemUpgrade* ItemUpgrade, UObject* __WorldContext);
	void GetSRGameState(UObject* __WorldContext, ABP_GameState_SpaceRig_C* GameState);
	void GetSRController(UObject* __WorldContext, ABP_SR_PlayerControllerBase_C* SRController);
};

