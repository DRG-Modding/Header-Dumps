#ifndef UE4SS_SDK_WND_TreeOfVanity_HPP
#define UE4SS_SDK_WND_TreeOfVanity_HPP

class UWND_TreeOfVanity_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCanvasPanel* Canvas_Connections;
    UCanvasPanel* CanvasPanel_Nodes;
    UImage* I_StartLine_1;
    UImage* I_StartPoint;
    UImage* I_StartPointOutline;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_1;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_2;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_3;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_4;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_5;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_6;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_7;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_8;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_9;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_10;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_11;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_12;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_13;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_14;
    UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_15;
    float SnapSize;
    UTreeOfVanity* TreeTestRef;
    FWND_TreeOfVanity_CClickedWithoutTokens ClickedWithoutTokens;
    void ClickedWithoutTokens();
    int32 tempIdx;
    FVector2D CanvasSize;
    TArray<UItm_TreeOfVanity_NodeConnection_C*> NodeConnectionMap;
    bool NodeBoughtFlowActive;
    UITM_TreeOfVanity_Node_C* TempNode;

    bool IsStartingNodeBought(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FVanityNode CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsNodeBought_ReturnValue);
    void RefreshConnections(TArray<UTreeOfVanityItemWidget*> AlreadyConnectedNodes, FVector2D CallFunc_Normal2D_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UItm_TreeOfVanity_NodeConnection_C* CallFunc_Create_ReturnValue, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, FAnchors K2Node_MakeStruct_Anchors, int32 CallFunc_Array_Add_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UITM_TreeOfVanity_Node_C* K2Node_DynamicCast_AsITM_Tree_Of_Vanity_Node, bool K2Node_DynamicCast_bSuccess, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetPosition_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, FVector2D CallFunc_ToRounded2D_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, UTreeOfVanityItemWidget* CallFunc_Array_Get_Item_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, FVector2D CallFunc_GetPosition_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, FVector2D CallFunc_ToRounded2D_ReturnValue_1, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue_2, FVector2D CallFunc_Normal2D_ReturnValue_1, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_DotProduct2D_ReturnValue, float CallFunc_DegAcos_ReturnValue, float CallFunc_VSize2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void AddNode(FVanityNode VanNode, UITM_TreeOfVanity_Node_C*& Node, NodeClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TArray<UTreeOfVanityItemWidget*>& K2Node_MakeArray_Array, FAnchors K2Node_MakeStruct_Anchors, UITM_TreeOfVanity_Node_C* CallFunc_Create_ReturnValue, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
    void LoadTreeOfVanity(UTreeOfVanity* TreeOfVanity, TMap<int32, UITM_TreeOfVanity_Node_C*> NodeMap, TArray<UTreeOfVanityItemWidget*> ConnectedNodes, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, FVanityNode CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, FVanityNode CallFunc_Array_Get_Item_1, UITM_TreeOfVanity_Node_C* CallFunc_AddNode_Node, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Get_Item_2, UITM_TreeOfVanity_Node_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UITM_TreeOfVanity_Node_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue, FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void NodeClicked(UITM_TreeOfVanity_Node_C* InNode);
    void OnWindowClosed_Event_0(UWindowWidget* Window);
    void ExecuteUbergraph_WND_TreeOfVanity(int32 EntryPoint, WindowDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UITM_TreeOfVanity_Node_C* K2Node_CustomEvent_InNode, UWND_Season_RewardClaimed_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetNumberOfTokens_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsNodeBought_ReturnValue, int32 Temp_int_Variable, UWindowWidget* K2Node_CustomEvent_Window, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_BuyTreeNode_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UTreeOfVanityItemWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UITM_TreeOfVanity_Node_C* K2Node_DynamicCast_AsITM_Tree_Of_Vanity_Node, bool K2Node_DynamicCast_bSuccess);
    void ClickedWithoutTokens__DelegateSignature();
}

#endif
