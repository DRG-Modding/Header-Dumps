#ifndef UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_Connector_HPP
#define UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_Connector_HPP

class UITEM_UpgradesBig_SingleIcon_Connector_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;

    void PreConstruct(bool IsDesignTime);
    void SetData(bool IsLocked);
    void ExecuteUbergraph_ITEM_UpgradesBig_SingleIcon_Connector(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_CustomEvent_IsLocked, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor K2Node_Select_Default);
}

#endif
