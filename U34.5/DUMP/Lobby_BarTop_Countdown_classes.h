// WidgetBlueprintGeneratedClass Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C
// Size: 0x281 (Inherited: 0x230)
struct ULobby_BarTop_Countdown_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Pulse; // 0x238(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x240(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_1; // 0x248(0x08)
	UBorder* Border_29; // 0x250(0x08)
	UImage* Icon_Warning; // 0x258(0x08)
	UImage* Image_2; // 0x260(0x08)
	UImage* Image_3; // 0x268(0x08)
	UCanvasPanel* RootCanvas; // 0x270(0x08)
	UTextBlock* TimerText; // 0x278(0x08)
	bool Ansel; // 0x280(0x01)

	void Construct();
	void CountDownChanged(bool IsActive);
	void TimerChanged(float newTime);
	void HostCoundownChanged(bool IsActive);
	void CustomEvent(float newTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Lobby_BarTop_Countdown(int32_t EntryPoint);
};

