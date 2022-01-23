#ifndef UE4SS_SDK_UI_Elimination_Cheat_HPP
#define UE4SS_SDK_UI_Elimination_Cheat_HPP

class UUI_Elimination_Cheat_C : public UUI_MissionCheat_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* Left;
    TArray<class UCheatMenu_BasicButtonWText_C*> EggButtons;
    TArray<class ABP_DreadnoughtEgg_C*> Eggs;

    void Construct();
    void CustomEvent_1(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_Elimination_Cheat(int32 EntryPoint, FExecuteUbergraph_UI_Elimination_CheatK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_DreadnoughtEgg_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UCheatMenu_BasicButtonWText_C* K2Node_CustomEvent_Button, class UCheatMenu_BasicButtonWText_C* CallFunc_CreateButton_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class ABP_DreadnoughtEgg_C* CallFunc_Array_Get_Item);
};

#endif
