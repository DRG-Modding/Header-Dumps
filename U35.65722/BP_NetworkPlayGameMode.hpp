#ifndef UE4SS_SDK_BP_NetworkPlayGameMode_HPP
#define UE4SS_SDK_BP_NetworkPlayGameMode_HPP

class ABP_NetworkPlayGameMode_C : public ABP_GameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    UClass* GetDefaultPawnClassForController(class AController* InControllerbool Temp_bool_Variable, bool CallFunc_IsLocalPlayerController_ReturnValue, UClass* CallFunc_LoadClass_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class APlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, bool CallFunc_IsOnSpaceRig_OnSpaceRig, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetDefaultEditorCharacter_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetDefaultCharacter_ReturnValue, UClass* K2Node_Select_Default);
    void RecieveAllDwarvesDown();
    void ExecuteUbergraph_BP_NetworkPlayGameMode(int32 EntryPoint);
};

#endif
