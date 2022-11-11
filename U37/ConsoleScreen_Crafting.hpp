#ifndef UE4SS_SDK_ConsoleScreen_Crafting_HPP
#define UE4SS_SDK_ConsoleScreen_Crafting_HPP

class UConsoleScreen_Crafting_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShopRotate;
    class UWidgetAnimation* Pan03;
    class UWidgetAnimation* Pan02;
    class UWidgetAnimation* Pan01;
    class UWidgetAnimation* Blink;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    class UImage* Image_Ad;
    class UImage* Image_Blink;
    class UOverlay* Overlay_0;
    class UImage* Shadow;
    TArray<class UTexture2D*> NewVar_0;
    class UTexture2D* NewVar_1;
    bool Show Shop Sign;

    void SetShowShopSign(bool Show Shop Sign);
    void Construct();
    void Notification Change();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_Crafting(int32 EntryPoint);
};

#endif
