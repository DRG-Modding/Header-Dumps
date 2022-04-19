#ifndef UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_Connector_HPP
#define UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_Connector_HPP

class UITEM_UpgradesBig_SingleIcon_Connector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;

    void PreConstruct(bool IsDesignTime);
    void SetData(bool IsLocked);
    void ExecuteUbergraph_ITEM_UpgradesBig_SingleIcon_Connector(int32 EntryPoint);
};

#endif
