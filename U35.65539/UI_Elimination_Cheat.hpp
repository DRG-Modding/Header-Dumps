#ifndef UE4SS_SDK_UI_Elimination_Cheat_HPP
#define UE4SS_SDK_UI_Elimination_Cheat_HPP

class UUI_Elimination_Cheat_C : UUI_MissionCheat_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* Left;
    TArray<UCheatMenu_BasicButtonWText_C*> EggButtons;
    TArray<ABP_DreadnoughtEgg_C*> Eggs;

    void Construct();
    void CustomEvent_1(UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_Elimination_Cheat(int32 EntryPoint, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UBP_DreadnoughtEgg_C*>& CallFunc_GetAllActorsOfClass_OutActors, UCheatMenu_BasicButtonWText_C* K2Node_CustomEvent_Button, UCheatMenu_BasicButtonWText_C* CallFunc_CreateButton_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, UBP_DreadnoughtEgg_C* CallFunc_Array_Get_Item);
}

#endif
