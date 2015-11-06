#ifndef __CONTEXT_DIALOGS_H_INCLUDED__
#define __CONTEXT_DIALOGS_H_INCLUDED__

#include "dialog_createavatar.h"
#include "dialog_about.h"

using namespace decentralised::dialogs;

namespace decentralised
{
	namespace context
	{
		class context_dialogs
		{
		public:
			context_dialogs() {}
			~context_dialogs() {}

			dialog_about* About;
			dialog_createavatar* CreateAvatar;
		};
	}
}

#endif