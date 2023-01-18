#ifndef UE4SS_SDK_ITEM_UpgradesSmall_SingleIcon_HPP
#define UE4SS_SDK_ITEM_UpgradesSmall_SingleIcon_HPP

class UITEM_UpgradesSmall_SingleIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IconBG;
    class UImage* IconOutline;
    FITEM_UpgradesSmall_SingleIcon_COnClicked OnClicked;
    void OnClicked(class UItemUpgrade* Upgrade);
    class UItemUpgrade* Upgrade;
    FITEM_UpgradesSmall_SingleIcon_COnHoverStart OnHoverStart;
    void OnHoverStart(class UItemUpgrade* Upgrade);
    FITEM_UpgradesSmall_SingleIcon_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UItemUpgrade* Upgrade);

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Show(class UItemUpgrade* Upgrade, TSubclassOf<class AActor> Item);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_ITEM_UpgradesSmall_SingleIcon(int32 EntryPoint);
    void OnHoverEnd__DelegateSignature(class UItemUpgrade* Upgrade);
    void OnHoverStart__DelegateSignature(class UItemUpgrade* Upgrade);
    void OnClicked__DelegateSignature(class UItemUpgrade* Upgrade);
};

#endif
