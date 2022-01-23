#ifndef UE4SS_SDK_Itm_TreeOfVanity_NodeConnection_HPP
#define UE4SS_SDK_Itm_TreeOfVanity_NodeConnection_HPP

class UItm_TreeOfVanity_NodeConnection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TurnOpaque;
    class UImage* Image_Line;
    class UTreeOfVanityItemWidget* Node1;
    class UTreeOfVanityItemWidget* Node2;
    bool BothBought;
    bool OneBought;

    void Construct();
    void NodeUpdated();
    void UpdateFullyConnectedNode();
    void ExecuteUbergraph_Itm_TreeOfVanity_NodeConnection(int32 EntryPoint, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, bool CallFunc_GetIsBought_ReturnValue, bool CallFunc_GetIsBought_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, FLinearColor CallFunc_SelectMenuColor_OutputColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_2, FVector2D Temp_struct_Variable_1, bool CallFunc_BooleanOR_ReturnValue, FVector2D K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue_1, FLinearColor CallFunc_SelectColor_ReturnValue);
};

#endif
