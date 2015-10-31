/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include <vector>

#include "../JuceLibraryCode/JuceHeader.h"

#include "OptionsComponent.h"
#include "InstrumentViewer.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent   : public Component, public MouseListener, public MessageListener
{
public:
    //==============================================================================
	MainContentComponent(const PropertiesFile::Options & options);
    ~MainContentComponent();

    void paint (Graphics&);
    void resized();

	void mouseDown(const MouseEvent &event);

	void clear_error_message();
	void set_error_message(const String & error_message);

	void reload_instruments();
	void handleMessage(const Message & message) override;

private:

	void handle_options_changed();

	OptionsComponent options_component_;
	String error_message_;
	ImageButton options_button_;
	PropertiesFile::Options options_;
	InstrumentViewer instrument_viewer_;
	Viewport viewport_;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED
