#ifndef UE4SS_SDK_Cheat_MaterialInfo_HPP
#define UE4SS_SDK_Cheat_MaterialInfo_HPP

class UCheat_MaterialInfo_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_Material;
    UTerrainMaterial* Material;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_MaterialInfo(int32 EntryPoint, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_FindTotalVolumeOfMaterialInWorld_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FText CallFunc_GetInGameName_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue);
}

#endif