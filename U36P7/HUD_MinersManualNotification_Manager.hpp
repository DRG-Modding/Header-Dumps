#ifndef UE4SS_SDK_HUD_MinersManualNotification_Manager_HPP
#define UE4SS_SDK_HUD_MinersManualNotification_Manager_HPP

class UHUD_MinersManualNotification_Manager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* VerticalBox_NotificationHolder;
    float NotificationScreenTime;

    void Construct();
    void OnMinersManualNotification(EMinersManualSection Section, FGuid ObjectID, FText Text);
    void ExecuteUbergraph_HUD_MinersManualNotification_Manager(int32 EntryPoint);
};

#endif
