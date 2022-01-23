#ifndef UE4SS_SDK_ITM_TreeOfVanityEditor_NodeIcon_HPP
#define UE4SS_SDK_ITM_TreeOfVanityEditor_NodeIcon_HPP

class UITM_TreeOfVanityEditor_NodeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_ClassIcon;
    class UImage* Image_Cursor;
    class UImage* Image_Move;
    class UImage* Image_Move_1;
    class UOverlay* Overlay_Move;
    class USizeBox* SizeBox_0;
    class UTextBlock* TextBlock_Connect;
    class UTextBlock* TextBlock_Disconnect;
    class UTextBlock* TextBlock_Minus;
    class UTextBlock* TextBlock_plus;
    class UTextBlock* TextBlock_Swap;
    class UWidgetSwitcher* WidgetSwitcher_PlusMinus;
    TEnumAsByte<ENUM_TreeOfVanityEditor_State::Type> ShowPlus;
    class UITM_TreeOfVanity_Node_C* CopyNode;
    class UMaterialInstanceDynamic* DynMat;

    void PreConstruct(bool IsDesignTime);
    void SetMovingNode(class UITM_TreeOfVanity_Node_C* Node);
    void SetAlpha(float Opacity);
    void ExecuteUbergraph_ITM_TreeOfVanityEditor_NodeIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TEnumAsByte<ENUM_TreeOfVanityEditor_State::Type> Temp_byte_Variable, class UITM_TreeOfVanity_Node_C* K2Node_CustomEvent_Node, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_GetColor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool Temp_bool_Variable_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_Opacity, FLinearColor K2Node_MakeStruct_LinearColor, class UWidget* K2Node_Select_Default, FVector2D K2Node_Select_Default_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D K2Node_Select_Default_2, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1);
};

#endif
